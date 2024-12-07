#include <iostream>
#include "personagem.h"
#define vidaJogador 5
#define vidaInimigo 5

using namespace std;

int main(){
    personagem jogador, inimigo;
    char result;
    int ataqueJ, ataqueI;
    srand(time(NULL));
    jogador = inicializaPersonagem(jogador, vidaJogador);    
    inimigo = inicializaPersonagem(inimigo, vidaInimigo);
    while(jogador.vida > 0 && inimigo.vida > 0){
        cout << "???????????????";
        mostraAtaques(jogador.lista);
        cout << "Escolha um Ataque para fazer" << endl;
        cin >> ataqueJ;
        jogador.lista = removeAVL(jogador.lista, &ataqueJ);
        cout << "AAAAAAAAAAAAAA" << endl;
        ataqueI = inimigo.lista->info;
        inimigo.lista = removeAVL(jogador.lista, &ataqueI);
        switch(ataqueJ){
            case 0:
                switch(ataqueI){
                    case 0:
                        result = 'e';
                        break;
                    case 1:
                        result = 'v';
                        break;
                    case 2:
                        cout << 'd';
                        break;
                }
                break;
            case 1:
                switch(ataqueI){
                    case 0:
                        result = 'd';
                        break;
                    case 1:
                        result = 'e';
                        break;
                    case 2:
                        cout << 'v';
                        break;
                }
                break;
            case 2:
                switch(ataqueI){
                    case 0:
                        result = 'v';
                        break;
                    case 1:
                        result = 'd';
                        break;
                    case 2:
                        cout << 'e';
                        break;
                }
                break;
        }
        cout << "VIDA JOGADOR: " << jogador.vida << endl;
        cout << "VIDA INIMIGO: " << inimigo.vida << endl;
        if(result == 'd'){
            cout << "Vitoria Inimigo" << endl;
            jogador.vida--;
        } else{
            if(result == 'v'){
                cout << "Vitoria Jogador" << endl;
                inimigo.vida--;
            } else{
                cout << "EMPATE" << endl;
            }
        }
        if(jogador.lista == NULL){
            for(int i = 0; i < 5; i++){
                jogador.lista = randomizarValores(jogador.lista, i);
                inimigo.lista = randomizarValores(inimigo.lista, i);
            }
        }
    }
}