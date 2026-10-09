// MadLib
// Cria uma história com base nas respostas do usuário.

#include <iostream>
#include <string>

using namespace std;

// Protótipos das funções
string perguntarTexto(string mensagem);
int perguntarNumero(string mensagem);
void contarHistoria(string nome, string substantivo, int numero,
                    string parteCorpo, string verbo);

int main()
{
    cout << "Bem-vindo ao MadLib!\n\n";
    cout << "Responda às perguntas para criar uma nova história.\n";

    string nome = perguntarTexto("Digite um nome: ");

    string substantivo = perguntarTexto(
        "Digite um substantivo no plural (ex.: dragões): ");

    int numero = perguntarNumero("Digite um número: ");

    string parteCorpo = perguntarTexto(
        "Digite uma parte do corpo (ex.: rosto): ");

    string verbo = perguntarTexto(
        "Digite um verbo no infinitivo (ex.: desejar): ");

    contarHistoria(nome, substantivo, numero, parteCorpo, verbo);

    return 0;
}

// Solicita e retorna um texto.
string perguntarTexto(string mensagem)
{
    string texto;

    cout << mensagem;
    getline(cin >> ws, texto);

    return texto;
}

// Solicita e retorna um número inteiro.
int perguntarNumero(string mensagem)
{
    int numero;

    cout << mensagem;
    cin >> numero;

    return numero;
}

// Exibe a história usando as respostas do usuário.
void contarHistoria(string nome, string substantivo, int numero,
                    string parteCorpo, string verbo)
{
    cout << "\nAqui está sua história:\n\n";

    cout << "O famoso explorador " << nome;
    cout << " estava prestes a desistir de uma busca que durava ";
    cout << "a vida inteira para encontrar\n";

    cout << "a Cidade Perdida dos " << substantivo;
    cout << ", quando, um dia, os " << substantivo;
    cout << " encontraram o explorador.\n";

    cout << "Cercado por " << numero << " " << substantivo;
    cout << ", uma lágrima chegou à seguinte parte do corpo de ";
    cout << nome << ": " << parteCorpo << ".\n";

    cout << "Depois de todo esse tempo, a busca finalmente havia terminado. ";
    cout << "E então, os " << substantivo;
    cout << "\ndevoraram imediatamente " << nome << ".\n";

    cout << "A moral da história? Tenha cuidado com o que você ";
    cout << "decide " << verbo << "!\n";
}