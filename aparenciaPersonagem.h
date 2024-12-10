#include <iostream>
#include <string>
#include <iomanip>
#define outlineInimigo "\033[38;2;19;14;34m"
#define Pap1 "\033[38;2;24;61;186m"
#define Pap2 "\033[38;2;30;83;157m"
#define Pap3 "\033[38;2;42;74;118m"
#define Pap4 "\033[38;2;38;59;78m"
#define Pap5 "\033[38;2;27;38;49m"
#define inimigoCor1 "\033[38;2;30;27;49m"
#define inimigoCor2 "\033[38;2;34;35;59m"
#define inimigoCor3 "\033[38;2;49;53;78m"
#define inimigoCor4 "\033[38;2;226;236;255m"
#define Ped1 "\033[38;2;66;186;24m"
#define Ped2 "\033[38;2;30;157;39m"
#define Ped3 "\033[38;2;42;118;74m"
#define Ped4 "\033[38;2;38;78;66m"
#define Ped5 "\033[38;2;27;43;49m"
#define Tes1 "\033[38;2;186;24;24m"
#define Tes2 "\033[38;2;157;30;43m"
#define Tes3 "\033[38;2;118;42;71m"
#define Tes4 "\033[38;2;76;38;78m"
#define Tes5 "\033[38;2;41;27;49m"
#define CinzaPedra1 "\033[38;2;124;138;118m"
#define CinzaPedra2 "\033[38;2;95;115;100m"
#define CinzaPedra3 "\033[38;2;77;97;86m"
#define CinzaPedra4 "\033[38;2;51;71;65m"
#define CinzaPedra5 "\033[38;2;28;42;48m"
#define CinzaTesoura1  "\033[38;2;138;124;118m"
#define CinzaTesoura2  "\033[38;2;115;99;95m"
#define CinzaTesoura3  "\033[38;2;97;77;79m"
#define CinzaTesoura4  "\033[38;2;71;51;61m"
#define CinzaTesoura5  "\033[38;2;48;28;43m"
#define CinzaPapel1 "\033[38;2;58;63;78m"
#define CinzaPapel2 "\033[38;2;68;76;88m"
#define CinzaPapel3 "\033[38;2;62;70;82m"
#define CinzaPapel4 "\033[38;2;46;56;66m"
#define CinzaPapel5 "\033[38;2;27;37;47m"

using namespace std;
void imprimirInimigo(int vida){
    string tesoura1 = Tes1;
    string tesoura2 = Tes2;
    string tesoura3 = Tes3;
    string tesoura4 = Tes4;
    string tesoura5 = Tes5;
    string papel1 = Pap1;
    string papel2 = Pap2;
    string papel3 = Pap3;
    string papel4 = Pap4;
    string papel5 = Pap5;
    string pedra1 = Ped1;
    string pedra2 = Ped2;
    string pedra3 = Ped3;
    string pedra4 = Ped4;
    string pedra5 = Ped5;
    switch (vida){
        case 4:;
            pedra1 = CinzaPedra1;
            tesoura1 = CinzaTesoura1;
            papel1 = CinzaPapel1;
            break;
        case 3:
            pedra1 = CinzaPedra1;
            pedra2 = CinzaPedra2;
            tesoura1 = CinzaTesoura1;
            tesoura2 = CinzaTesoura2;
            papel1 = CinzaPapel1;
            papel2 = CinzaPapel2;
            break;
        case 2:
            pedra1 = CinzaPedra1;
            pedra2 = CinzaPedra2;
            pedra3 = CinzaPedra3;
            tesoura1 = CinzaTesoura1;
            tesoura2 = CinzaTesoura2;
            tesoura3 = CinzaTesoura3;
            papel1 = CinzaPapel1;
            papel2 = CinzaPapel2;
            papel3 = CinzaPapel3;
            break;
        case 1:
            pedra1 = CinzaPedra1;
            pedra2 = CinzaPedra2;
            pedra3 = CinzaPedra3;
            pedra4 = CinzaPedra4;
            tesoura1 = CinzaTesoura1;
            tesoura2 = CinzaTesoura2;
            tesoura3 = CinzaTesoura3;
            tesoura4 = CinzaTesoura4;
            papel1 = CinzaPapel1;
            papel2 = CinzaPapel2;
            papel3 = CinzaPapel3;
            papel4 = CinzaPapel4;
            break;
        case 0:
            pedra1 = CinzaPedra1;
            pedra2 = CinzaPedra2;
            pedra3 = CinzaPedra3;
            pedra4 = CinzaPedra4;
            pedra5 = CinzaPedra5;
            tesoura1 = CinzaTesoura1;
            tesoura2 = CinzaTesoura2;
            tesoura3 = CinzaTesoura3;
            tesoura4 = CinzaTesoura4;
            tesoura5 = CinzaTesoura5;
            papel1 = CinzaPapel1;
            papel2 = CinzaPapel2;
            papel3 = CinzaPapel3;
            papel4 = CinzaPapel4;
            papel5 = CinzaPapel5;
            break;
    }
    cout << "                         " << outlineInimigo << (char)254u << (char)254u << endl; 
    cout << "                       " <<  (char)254 << (char)254 << papel1 << (char)254 << (char)254 << outlineInimigo << (char)254 << endl;
    cout << "                    "  << (char)254 << (char)254 << papel2 << (char)254 <<(char)254 <<(char)254 << papel1 << (char)254 << outlineInimigo << (char)254 << endl;
    cout << "                  " << (char)254 << (char)254 << papel4 << (char)254 << papel3 << (char)254 << (char)254 << (char)254 << outlineInimigo << (char)254 << (char)254 << endl;
    cout << "                " <<  (char)254 <<  (char)254 << papel5 << (char)254 << papel4 << (char)254 <<(char)254 <<(char)254 << outlineInimigo << (char)254 <<(char)254 << endl;
    cout << "          " << (char)254 <<(char)254 <<(char)254 <<(char)254 <<(char)254 <<(char)254 << inimigoCor1 << (char)254 <<(char)254 << papel5 << (char)254 <<(char)254 << outlineInimigo << (char)254 <<(char)254 << endl;
    cout << "         " << outlineInimigo <<  (char)254 << inimigoCor1 <<  (char)254 << (char)254 << (char)254 << (char)254 << (char)254 << (char)254 << (char)254 << (char)254 << (char)254 <<outlineInimigo <<  (char)254 << endl;
    cout << "        " <<  (char)254 << inimigoCor1 <<  (char)254 << (char)254 << inimigoCor2 <<(char)254 << (char)254 << (char)254 << (char)254 << (char)254 << (char)254 << inimigoCor1 << (char)254 << (char)254 << outlineInimigo << (char)254 << endl;
    cout << "        " << (char)254 << inimigoCor2 << (char)254 << (char)254 << inimigoCor3 << (char)254 << (char)254 << (char)254 << (char)254 << (char)254 << (char)254 << inimigoCor2 << (char)254 << (char)254 << outlineInimigo << (char)254 << endl;
    cout << "        " << (char)254 <<  inimigoCor2 << (char)254 <<  inimigoCor3 << (char)254 << inimigoCor4 << (char)254 << (char)254 << inimigoCor3 << (char)254 << (char)254 <<  inimigoCor4 << (char)254 << (char)254 <<  inimigoCor3 << (char)254 <<  inimigoCor2 << (char)254 << outlineInimigo << (char)254 << (char)254 <<  endl;
    cout << "        " << (char)254 <<  inimigoCor2 << (char)254 <<  inimigoCor3 << (char)254 << inimigoCor4 << (char)254 << (char)254 << inimigoCor3 << (char)254 << (char)254 <<  inimigoCor4 << (char)254 << (char)254 <<  inimigoCor3 << (char)254 <<  outlineInimigo << (char)254 << pedra1 << (char)254 << (char)254 << outlineInimigo << (char)254 << endl;
    cout << "        " << (char)254 <<  inimigoCor2 << (char)254 <<  (char)254 <<  inimigoCor3 << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor2 << (char)254 <<  outlineInimigo << (char)254 <<  pedra1 << (char)254 << pedra2 << (char)254 <<  (char)254 <<   outlineInimigo << (char)254 <<  endl; 
    cout << "         " << (char)254 <<  inimigoCor2 << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  outlineInimigo << (char)254 << pedra2 << (char)254 <<  pedra3 << (char)254 <<  (char)254 <<   outlineInimigo << (char)254 <<  endl;
    cout << " " << (char)254 <<  (char)254 <<  (char)254 <<  "       " << (char)254 << inimigoCor1 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  outlineInimigo << (char)254 <<  " " << (char)254 <<  pedra3 << (char)254 <<  (char)254 <<  pedra4 << (char)254 <<  outlineInimigo << (char)254 << endl;
    cout << (char)254 <<  tesoura1 << (char)254 <<  outlineInimigo << (char)254 <<  tesoura1 << (char)254 <<   outlineInimigo << (char)254 << "       " << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  "   " << (char)254 <<  pedra4 << (char)254 <<  (char)254 <<  outlineInimigo << (char)254 <<  endl;
    cout <<  (char)254 <<  tesoura1 <<  (char)254 <<   (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<  "     " <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  " " <<  (char)254 <<  pedra5 <<  (char)254 <<  pedra4 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<  endl;
    cout <<  (char)254 << tesoura1 << (char)254 <<   (char)254 <<  tesoura2 <<  (char)254 <<  outlineInimigo<<  (char)254 <<  "   " <<  (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   outlineInimigo <<  (char)254 <<   (char)254 <<   (char)254 <<  pedra5 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<  endl;
    cout <<  (char)254 <<  tesoura1 <<  (char)254 <<  tesoura2 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<  "  " <<  (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor2 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 << pedra5 <<  (char)254 <<  outlineInimigo <<  (char)254 <<  endl;
    cout <<  " " << (char)254 <<  tesoura2 <<  (char)254 <<   tesoura3 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor2 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<  endl;
    cout << " " <<  (char)254 <<  tesoura3 <<  (char)254 <<   (char)254 <<  tesoura4 <<  (char)254 <<  outlineInimigo <<  (char)254 <<  inimigoCor1 << (char)254 <<   (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<  inimigoCor2<<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  endl;
    cout << "  " <<  (char)254 <<  tesoura4 <<  (char)254 <<  tesoura5 <<  (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<  inimigoCor2 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<  endl;
    cout <<  (char)254 <<  "  " <<  (char)254 <<   (char)254 <<  tesoura5 <<  (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor2 <<  (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<   (char)254 <<  inimigoCor1 <<  (char)254 <<   (char)254 <<   (char)254 <<  outlineInimigo <<  (char)254 <<   (char)254 <<   (char)254 <<  "     " <<  (char)254 <<  endl;
    cout << inimigoCor1 << (char)254 <<  outlineInimigo << (char)254 <<  "  " << (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  inimigoCor2 << (char)254 <<  inimigoCor1<< (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor2 << (char)254 <<  inimigoCor1<< (char)254 <<  (char)254 <<  outlineInimigo << (char)254 <<  (char)254 <<  (char)254 <<  "  " << (char)254 <<  inimigoCor1 << (char)254 <<  endl;
    cout << inimigoCor1 << (char)254 <<  (char)254 <<  outlineInimigo << (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor2 << (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  outlineInimigo<< (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  inimigoCor2 << (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  (char)254 <<  outlineInimigo << (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  endl;
    cout << inimigoCor2 << (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  outlineInimigo << (char)254 <<  inimigoCor1 << (char)254 <<  inimigoCor2 << (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  outlineInimigo << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  inimigoCor2 << (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  outlineInimigo << (char)254 <<  inimigoCor1 << (char)254 <<  (char)254 <<  inimigoCor2 << endl;
    cout << (char)254 <<  outlineInimigo << (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  inimigoCor1 << (char)254 <<  inimigoCor4 << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor2 << (char)254 <<  inimigoCor1 << (char)254 <<  outlineInimigo << (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  endl;
    cout << (char)254 <<  outlineInimigo << (char)254 <<  inimigoCor1 << (char)254 <<  inimigoCor4 << (char)254 <<  (char)254 <<  inimigoCor3 << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor4 << (char)254 <<  (char)254 <<  inimigoCor1 << (char)254 <<  outlineInimigo << (char)254 <<  inimigoCor2 << (char)254 <<  endl;
    cout << outlineInimigo << (char)254 <<  inimigoCor1 << (char)254 <<  inimigoCor4 << (char)254 <<  inimigoCor2 << (char)254 <<  inimigoCor3 << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor2 << (char)254 <<  inimigoCor4 << (char)254 <<  inimigoCor1 << (char)254 <<  outlineInimigo << (char)254 <<  endl;
    cout << inimigoCor1 << (char)254 <<  inimigoCor4 << (char)254 <<  inimigoCor2 << (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor4 << (char)254 <<  inimigoCor1 << (char)254 <<  endl;
    cout << inimigoCor4 << (char)254 << inimigoCor1 << (char)254 << (char)254 <<   (char)254 <<    (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  (char)254 <<  inimigoCor4 << (char)254 <<  endl;
}