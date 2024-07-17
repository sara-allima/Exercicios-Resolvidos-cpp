/*Questão 2: Escreva um programa que receba um vetor de inteiros v com tamanho n e retorne o maior e o menor elemento desse vetor.*/
#include <iostream>

using namespace std;

int main() {
    int n, maior, menor;

    cout << "Total de itens no vetor: ";
    cin >> n;
    
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Valor do item: ";
        cin >> v[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        if (v[i] > maior) 
        {
            maior = v[i]; //usando variaveis para poder salvar o maior numero e, se preciso, substitui-lo por outro
        }
        if(v[i] < menor)
        {
            menor = v[i]; //usando variaveis para poder salvar o menor numero e, se preciso, substitui-lo por outro
        }
    }
    
    cout << "O maior numero foi " << maior << " e o menor foi "<< menor;
}