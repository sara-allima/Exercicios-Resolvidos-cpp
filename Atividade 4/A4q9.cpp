#include <iostream>

using namespace std;

int main(){
    int vet[20], x, vezes;

    for(int i = 0; i < 20; i++) //for atribuição de valor
    {
        cout << "Escolha um numero: ";
        cin >> vet[i];
    }

    cout << "Escolha outro numero: ";
    cin >> x;

    for (int i = 0; i < 20; i++)
    {
        if (vet[i] == x)
        {
            vezes+= 1;
        }
        
    }

    cout << "O numero " << x << " apareceu " << vezes << " no vetor";
    
}