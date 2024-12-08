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

void posOrdem_AVL(no *T){
    if(T != NULL){
        emOrdem_AVL(T->esquerda);
		emOrdem_AVL(T->direita);
        cout << T->info << endl;
    }
} 
no *maior_AB(no *T) {
    no *p;
	if (T != NULL) {
		while (T->direita != NULL){
			T = T->direita;
		}
		return T;  
	}
	else
		return NULL;
}

no *rotacao(no* L, int fatb){
    int fatAux;
    if(fatb > 0){
        fatAux = getBalance(L->direita);
    } else{
        fatAux = getBalance(L->esquerda);
    }
    if(fatAux > 1 || fatAux*-1 > 1){
        L = rotacao(L->direita, fatb);
        fatb = getBalance(L);   
        if(!(fatb > 1 || fatb*-1 > 1)){
            return L;
        }
    }
    if(fatb > 0){
        fatAux = getBalance(L->direita);
        if(fatAux < 0){
            L = rotacaoDireita(L);
        }
        return rotacaoEsquerda(L);
    } else{
        fatAux = getBalance(L->esquerda);
        if(fatAux > 0){
            L = rotacaoEsquerda(L);
        }
        return rotacaoDireita(L);
    }
}
no *removeAVL(no *T, int *x){
	no *p;
    int aux = *x;
	if (T == NULL) {
        *x = -1;
		return NULL;
	}
	else{
		if (*x < T->info)
			T->esquerda = removeAVL(T->esquerda, x);
		else {
			if (*x > T->info)
				T->direita = removeAVL(T->esquerda, x);
			else {
				*x = T->valorAtaque;
				if ((T->esquerda == NULL) && (T->direita == NULL)){
					p = T;
					free(p);
					T = NULL;
					return T;
				}
				else{
					if (T->esquerda == NULL){ 
						p = T;
						T = T->direita;
						free(p);
						return T;
					}
					else{
						// so tem o filho da esquerda 
						if (T->direita == NULL){ 
							p = T;
							T = T->esquerda;
							free(p);
							return T;
						}
						else {
							// NO tem 2 filhos 
							p = maior_AB(T->esquerda);
							T->info = p->info;
							T->esquerda = removeAVL(T->esquerda, &aux);
						}
					}
				}
			}
		}
        int fatb = getBalance(T);
        if(fatb > 1 || fatb*-1 > 1){
            return rotacao(T, fatb);
        }
		return T;
	}
}