#include <iostream>
#include "geracaoAtaques.h"
using namespace std;

struct personagem{
    int vida;
    no* lista;
};

personagem inicializaPersonagem(personagem P, int vida){
    P.lista = inicializaAVL(P.lista);
    for(int i = 0; i < 5; i++){
        P.lista = randomizarValores(P.lista, i);
    }
    P.vida = vida;
    return P;
}