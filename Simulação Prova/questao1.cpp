/*Questão 1: Dado um vetor de inteiros v com tamanho n, escreva um programa
para calcular a média ponderada e aritmética dos elementos desse vetor.
P.s: Na média ponderada, use o índice do vetor e N é dado pelo usuário*/
#include <iostream>

using namespace std;

int main() {
    int n, media, mediaPond, soma, somaPond;

    cout << "Qual o tamanho do vetor?" << endl;
    cin >> n;

    int v[n];

    for (int i = 0; i < sizeof(v) / 4; i++)
    {
        v[i] = i * 2;

        soma+= v[i];
        somaPond = somaPond + (v[i] * i);
    }

    media = soma / n;
    mediaPond = somaPond / n;

    cout << "Media Aritmetica: " << media << endl;
    cout << "Media Ponderada: " << mediaPond;
}