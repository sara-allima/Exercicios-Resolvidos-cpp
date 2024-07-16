/*09. Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número qualquer,
calcular e escrever quantas vezes esse número aparece no vetor.*/
#include <iostream>

using namespace std;

int main() {
    int vet[20], x, qtd;

    for (int i = 0; i < sizeof(vet) / 4; i++)
    {
        cout << "Escolha um numero: ";
        cin >> vet[i];
    }

    cout << "Valor X: ";
    cin >> x;

    for (int i = 0; i < 20; i++)
    {
        if (x == vet[i])
        {
            qtd++;
        }
        
    }
    
    cout << "O numero " << x << " aparece no vetor " << qtd << " vezes.";
}