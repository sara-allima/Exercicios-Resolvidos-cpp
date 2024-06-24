/*Faça um algoritmo que converta graus em radianos. Imprima o valor em radianos e o seu
correspondente em graus.*/
#include <iostream>

using namespace std;

int main() {
    float graus, radianos;

    cin >> graus;

    radianos = graus * 0.0174533;

    cout << radianos;
}