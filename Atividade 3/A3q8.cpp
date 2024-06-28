/*Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a média (simples) desse aluno.
Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota.*/
#include <iostream>

using namespace std;

int main() {
    float n1, n2, media;

    cout << "Nota 1: ";
    cin >> n1;

    while (n1 > 10)
    {
        cout << "A nota nao pode ultrapassar 10." << endl;
        cout << "Nota 1: ";
        cin >> n1;
    }

    cout << "Nota 2: ";
    cin >> n2;

    while (n2 > 10)
    {
        cout << "A nota nao pode ultrapassar 10." << endl;
        cout << "Nota 2: ";
        cin >> n2;
    }

    media = (n1 + n2) / 2;

    cout << "A media do aluno e de " << media;
}