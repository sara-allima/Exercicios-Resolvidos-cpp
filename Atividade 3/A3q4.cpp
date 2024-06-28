/*Faça um algoritmo que calcule a soma dos números primos entre 1 e 50.*/
#include <iostream>

using namespace std;

int main() {
    int aux;

    for (int i = 1; i <= 50; i++)
    {
        aux = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                aux+=1;
            }
        }
        
        if (aux == 2)
        {
            cout << i << " e primo" << endl;
        }
    }
}