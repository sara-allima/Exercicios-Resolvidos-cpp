/*Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao
quadrado, sem efetuar o armazenamento do resultado em memória.*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;

    cin >> x;

    cout << pow(x,2);
}