/*10. Faça um algoritmo para preencher um vetor de 20 números. Após isto, deverá ser lido mais um número
qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve pedir um
novo número.*/
#include <iostream>

using namespace std;

int main() {
    int vet[5], x;

    for (int i = 0; i < sizeof(vet) / 4; i++)
    {
        cout << "Escolha um numero: ";
        cin >> vet[i];
    }

    cout << "Valor X: ";
    cin >> x;

    for (int i = 0; i < 5; i++)
    {
        while (x == vet[i])
        {
            cout << "Insira um novo numero: ";
            cin >> x;
        }
        
    }
}