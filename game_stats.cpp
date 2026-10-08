#include <iostream>
#include <string>


using namespace std;
int main(){

    int pontuacao = 0;
    double distancia 1200.75;
    char jogarNovamente = 's';
    bool possuiEscudo = true;
    short vidas = 3;

cout << "===GAME STATS===\n";
cout << "Pontuação: " << pontuacao << endl;
cout << "Distância percorrida: " << distancia << " metros" << endl;
cout << "Possui escudo: " << (possuiEscudo ? "Sim" : "Não") << endl;
cout << "Vidas restantes: " << vidas << endl;
cout << "Escudo: " << (possuiEscudo ? "Ativo" : "Inativo") << endl;

pontuacao += 100;
vidas++;

cout<< "\nDepois da batalha\n";
cout << "Pontuação: " << pontuacao << endl;
cout << "Vidas restantes: " << vidas << endl;

return 0;

    


}