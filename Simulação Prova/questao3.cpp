/*Questão 3: Escreva um código que calcule a soma dos elementos pares e ímpares, separadamente, de um vetor de inteiros v com tamanho n.*/
#include <iostream>

using namespace std;

int main() {
    int n, somaPares, somaImpares;

    cout << "Tamanho do vetor: ";
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Valor do item: ";
        cin >> v[i];

        if (v[i] % 2 == 0)
        {
            somaPares+= v[i];
        } else {
            somaImpares+= v[i];
        }
    }

    cout << somaPares << endl;
    cout << somaImpares << endl;
}