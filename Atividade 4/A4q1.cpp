/*01. Faça um Programa que preencha um vetor de 5 números inteiros e mostre-os*/

#include <iostream>

using namespace std;

int main() {
    int vet[5];

    for (int i = 0; i < sizeof(vet) / 4; i++)
    {
        vet[i] = 2 * i;
    }
    
    for (int i = 0; i < sizeof(vet) / 4; i++)
    {
        cout << vet[i] << endl;
    }
    
    /*Ao invés do size of pode usar o tamanho normal da array, nesse caso, o 5*/
}