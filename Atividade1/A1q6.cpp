#include <iostream>

using namespace std;

int mian() {
    float volume, comprimento, largura, altura;

    cout << "Qual o comprimento da caixa?" << endl;
    cin >> comprimento;

    cout << "Qual a largura da caixa?" << endl;
    cin >> largura;

    cout << "Qual a altura?" << endl;
    cin >> altura;

    volume = comprimento * largura * altura;

    cout << "O volume da caixa retangular e de " << volume;
}