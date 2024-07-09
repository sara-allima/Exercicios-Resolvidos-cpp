/*Elaborar um programa que leia dois valores numéricos reais desconhecidos representados pelas
variáveis A e B. Calcular, armazenar e apresentar os resultados das quatro operações aritméticas
básicas.*/
#include <iostream>

using namespace std;

int main() {
    float a, b, soma, subtracao, multiplicacao, divisao;

    cout << "Valor de A: ";
    cin >> a;

    cout << "Valor de B: ";
    cin >> b;

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    cout << "Soma = " << soma << endl;
    cout << "Subtracao = " << subtracao << endl;
    cout << "multiplicacao = " << multiplicacao << endl;
    cout << "divisao = " << divisao << endl;
}