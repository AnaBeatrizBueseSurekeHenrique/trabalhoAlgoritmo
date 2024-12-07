#include <iostream>

using namespace std;
struct no{
    int info;
    no *esquerda;
    no *direita;
    int altura;
};
 
int maximo(int a, int b)
{
    return (a > b)? a : b;
}
 
int altura_AVL(no *p)
{
    if (p == NULL)
        return 0;
    return 1+maximo(altura_AVL(p->esquerda), altura_AVL(p->direita));
}
 
no* newNode(int valor)
{
    no* node = new no;
    node->info   = valor;
    node->esquerda   = NULL;
    node->direita  = NULL;
    node->altura = 0; 
    return(node);
}
 
no *rotacaoDireita(no *p)
{
    no *q = p->esquerda;
    no *temp = q->direita;
 
    q->direita = p;
    p->esquerda = temp;
 
    p->altura = altura_AVL(p);
    q->altura = altura_AVL(q);
 
    return q;
}
 
no *rotacaoEsquerda(no *p)
{
    no *q = p->direita;
    no *temp = q->esquerda;
 
    q->esquerda = p;
    p->direita = temp;
 
    p->altura = altura_AVL(p);
    q->altura = altura_AVL(q);
 
    return q;
}
 
int getBalance(no *N)
{
    if (N == NULL)
        return 0;
    return altura_AVL(N->direita) - altura_AVL(N->esquerda);
}
 
no* insereAVL(no* T, int valor)
{
	int fb;
    if (T == NULL)
        return(newNode(valor));
 
    if (valor < T->info)
        T->esquerda  = insereAVL(T->esquerda, valor);
    else if (valor > T->info)
        T->direita = insereAVL(T->direita, valor);
    else 
        return T;
 
    T->altura = altura_AVL(T);
 
    fb = getBalance(T);
 
    if (fb > 1 && valor > T->direita->info)
	{
		return rotacaoEsquerda(T);
	}
      
    if (fb < -1 && valor < T->esquerda->info)
	{
        return rotacaoDireita(T);
    }
 
    if (fb > 1 && valor < T->direita->info)
    {
	    T->direita =  rotacaoDireita(T->direita);
        return rotacaoEsquerda(T);
    }
 
    if (fb < -1 && valor > T->esquerda->info)
    {
        T->esquerda = rotacaoEsquerda(T->esquerda);
        return rotacaoDireita(T);
    }
 
    return T;
}