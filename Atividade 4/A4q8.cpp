/*08. Faça um algoritmo para ler 5 números e armazenar em um vetor VET, verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram*/
#include <iostream>

using namespace std;

int main() {
    int vet[10];

    for (int i = 0; i < 10; i++) //loop de preenchimento
    {
        cout << "Escolh um numero: ";
        cin >> vet[i];
    }

    for (int i = 0; i < sizeof(vet) / 4; i++) //loop de comparação
    {
        for(int j = i + 1; j < sizeof(vet) / 4; j++)
        {
            if (vet[j] == vet[i])
            {
                cout << "O numero " << vet[j] << " se repete nas posicoes " << i << " e " << j;
            }
            
        }
    }
}