#include <iostream>
#include <ctime>
#include "bibliotecaAVL.h"

no *randomizarValores(no*ataqueGerais, int i){
    int x;
    x = rand()%3;
    ataqueGerais = insereAVL(ataqueGerais, i, x);  
    return ataqueGerais; 
}
void valoresAtaque(int x){
    switch(x){
            case 0:
                cout << "TESOURA" << " ";
                break;
            case 1:
                cout << "PAPEL" << " ";
                break;
            case 2:
                cout << "PEDRA" << " ";
                break;
        }
}

void mostraAtaques(no *ataques){
    no* aux = ataques;
    if(aux != NULL){
        mostraAtaques(aux->esquerda);
        cout << aux->info << ". ";
        valoresAtaque(aux->valorAtaque);
		mostraAtaques(aux->direita);
    }
}

