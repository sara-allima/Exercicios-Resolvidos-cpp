/*Faça um algoritmo que calcule a soma dos números ímpares entre 1 e um limite superior definido
pelo usuários*/
#include <iostream>

using namespace std;

int main() {
    int max, soma;

    cout << "Defina o limite: ";
    cin >> max;

    for (int i = 0; i < max; i++)
    {
        if (i % 2 == 1)
        {
            soma+=i;

            cout << i << " = " << soma << endl;
        }
        
    }
    
}