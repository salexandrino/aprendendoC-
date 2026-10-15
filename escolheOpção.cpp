#include <iostream>
#include <string>

using namespace std;
int main() {
    int opcao;
    cout << "Escolha uma opção:\n";
    cout << "DIFICULDADE\n";
    cout << "1. Fácil\n";
    cout << "2. Médio\n";
    cout << "3. Difícil\n";

    cin >> opcao;

    switch (opcao){
        case 1:
            cout << "Você escolheu a dificuldade Fácil.\n";
            break;
        case 2:
            cout << "Você escolheu a dificuldade Médio.\n";
            break;
        case 3:
            cout << "Você escolheu a dificuldade Difícil.\n";
            break;
        default:
            cout << "Opção inválida. Por favor, escolha uma opção válida.\n";
            
    }

    return 0;

}