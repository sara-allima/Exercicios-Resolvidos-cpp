/*Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15
(inclusive) e 100 (inclusive).*/
#include <iostream>

using namespace std;

int main() {
    float media, soma;

    for (int i = 15; i <= 100; i++)
    {
        soma+=i;
    }

    media = soma / 85;

    cout << media;
    
}