#include <iostream>

using namespace std;
struct no{
    int info, valorAtaque;
    no *esquerda;
    no *direita;
    int altura;
};

no *inicializaAVL(no* L){
    return NULL;
}
 
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
 
no* newNode(int valor, int valorAtaque)
{
    no* node = new no;
    node->info   = valor;
    node->valorAtaque = valorAtaque;
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
 
no* insereAVL(no* T, int valor, int valorAtaque)
{
	int fb;
    if (T == NULL)
        return(newNode(valor, valorAtaque));
 
    if (valor < T->info)
        T->esquerda  = insereAVL(T->esquerda, valor, valorAtaque);
    else if (valor > T->info)
        T->direita = insereAVL(T->direita, valor, valorAtaque);
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

void emOrdem_AVL(no *T){
    if(T != NULL){
        emOrdem_AVL(T->esquerda);
        cout << T->info << endl;
		emOrdem_AVL(T->direita);
    }
} 
no*removeAVL(no* L, int *x){
    no * aux = L, *aux2 = aux;
    while(aux!= NULL && aux->info != *x){
        if(*x > aux->info){
            aux2 = aux;
            aux = aux->direita;
        } else{
            aux2 = aux;
            aux = aux->esquerda;
        }
    }
    if(aux == NULL){
        *x = -1;
        return L;
    } else{
        *x = aux->valorAtaque;
        if(aux->direita == NULL && aux->esquerda == NULL){
            if(aux2->direita == aux){
                aux2->direita = NULL;
            } else{
                aux2->esquerda = NULL;
            }
        } else{
            no* aux3;
            if(aux->direita == NULL || aux->esquerda == NULL){
                if(aux->direita != NULL){
                    aux3 = aux->direita;
                } else{
                    aux3 = aux->esquerda;
                } 
            } else{
                no* aux4;
                aux3 = aux->esquerda;
                aux4 = aux3;
                while(aux3->direita != NULL){
                    if(aux3->direita->direita == NULL){
                        aux4 = aux3;
                    }
                    aux3 = aux3->direita;
                }
                aux4->direita = NULL;
                aux3->esquerda = aux->direita;
            }
             if(aux2->direita == aux){
                aux2->direita = aux3;
            } else{
                if(aux2->esquerda == aux){
                    aux2->esquerda = aux3;
                } else{
                    aux2 = aux3;
                    cout << "ENTAO....";
                    emOrdem_AVL(aux2);
                }
            }  
        }
        delete aux;
    }
    return L;
}