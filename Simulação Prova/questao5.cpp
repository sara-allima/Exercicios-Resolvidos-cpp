/*Questão 5: Faça um código que mostre subconjuntos sequenciais dentro de um vetor.
Exemplo: [1,2,3,5,6,7,10,11,12]; saída: 1,2,3; 5,6,7; 10,11,12.*/
#include <iostream>

using namespace std;

int main() {
    int n, cont = 0;

    cout << "Tamanho do vetor: ";
    cin >> n;

    int vet[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0 || vet[i] == vet[i-1] + 1) {
            if (cont > 0) cout << ",";
            cout << vet[i];
            cont++;
        } else {
            cout << endl;
            cout << vet[i];
            cont = 1;
        }
    }
    cout << endl;

}
