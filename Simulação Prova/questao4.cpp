/*Questão 4: Implemente um código que remova um elemento específico x de um vetor de inteiros v.
Certifique-se de que, após a remoção, o vetor seja reorganizado corretamente.*/
#include <iostream>

using namespace std;

int main() {
    int size, x, newSize;

    cout << "Tamanho do vetor: ";
    cin >> size;

    int vet[size];

    cout << "Insira os itens do vetor: ";
    for (int i = 0; i < size; i++)
    {
        cin >> vet[i];
    }

    cout << "Qual elemento voce deseja retirar?" << endl;
    cin >> x;
    
    newSize = size; //newSize recebe o tamanho de size para ser diminuido depois
    for (int i = 0; i < newSize; i++)
    {
        if (vet[i] == x) //Condição para encontrar elemento para ser removido
        {
            for (int j = i; j < newSize - 1; j++) //Deslocamento para a esquerda
            {
                vet[j] = vet[j + 1]; //valor atual fica recebendo o valor a sua direita até organizar o vetor
            }
            
            newSize--;
            i--;
        }
    }

    cout << "Vetor sem o " << x << ":" << endl;
    for (int i = 0; i < newSize; i++)
    {
        cout << vet[i] << " ";
    }
    
    
}