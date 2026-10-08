#include <iostream>
#include <string> 
int main(){
    
    usign namespace std;
    string nome;
    double nota1;
    double nota2;
    
    
    
    cout << "Nome: ";
    cin >> nome;
    
    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    double media = (nota1 + nota2) / 2;
    cout << "\nAluno: " << nome;
    cout << "\nMedia: " << media;

    if (media>= 7 ) {
        cout << "\n Situação: APROVADO ";

    } else if (media >= 5){
        cout << "\n Situação: RECUPERAÇÂO";

    } else {
        cout << "\n Situaçao: REPROVADO";
    }
    
    return 0
    
}    