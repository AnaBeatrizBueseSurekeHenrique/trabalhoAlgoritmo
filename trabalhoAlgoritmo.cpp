#include <iostream>
#include "personagem.h"
#include "aparenciaPersonagem.h"
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
        imprimirInimigo(inimigo.vida);
        cout << "Escolha um Ataque para realizar: " << endl;
        mostraAtaques(jogador.lista);
        cin >> ataqueJ;
        system("cls");
        jogador.lista = removeAVL(jogador.lista, &ataqueJ);
        while(ataqueJ == -1){
            cout << "Insira um valor em seu inventario!";
            cin >> ataqueJ;
            jogador.lista = removeAVL(jogador.lista, &ataqueJ);
            system("cls");
        }
        ataqueI = inimigo.lista->info;

        cout << endl;
        inimigo.lista = removeAVL(inimigo.lista, &ataqueI);
        cout << "Seu ataque foi ";
        valoresAtaque(ataqueJ);
        cout << "e o ataque do inimigo foi......";
        valoresAtaque(ataqueI);
        cout << endl;
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
                        result = 'd';
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
                        result = 'v';
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
                        result = 'e';
                        break;
                }
                break;
        }
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
        cout << endl << "VIDA JOGADOR: " << jogador.vida << endl;
        cout << "VIDA INIMIGO: " << inimigo.vida << endl;
        if(jogador.lista == NULL){
            for(int i = 0; i < 10; i++){
                jogador.lista = randomizarValores(jogador.lista, i);
                inimigo.lista = randomizarValores(inimigo.lista, i);
            }
        }
    }
}