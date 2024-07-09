/*02. Faça um Programa que preencha um vetor de 10 números reais e mostre-os na ordem inversa.*/
#include <iostream>

using namespace std;

int main() {
    int vet[10];

    for (int i = 0; i < sizeof(vet) / 4; i++)
    {
        vet[i] = i + 1;
    }
    
    for (int i = 9; i >= 0; i--)
    {
        cout << vet[i] << endl;
    }
    
    
}