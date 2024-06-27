/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.*/
#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, media;

    cout << "Primeira nota: ";
    cin >> n1;

    cout << "Segunda nota: ";
    cin >> n2;

    cout << "Terceira nota: ";
    cin >> n3;

    media = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);

    cout << media;
}