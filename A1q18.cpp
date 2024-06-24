/*Construir um programa que leia um valor numérico inteiro e apresente como resultado
armazenado em memória os seus valores sucessor e antecessor.*/
#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Numero: ";
    cin >> x;

    cout << x - 1 << " e " << x + 1;
}