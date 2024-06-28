/*Faça um algoritmo que calcule a soma dos números ímpares entre 1 e 100.*/
#include <iostream>

using namespace std;

int main() {
    int impares, soma;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            soma+=i;
        }
        
    }
    
    cout << "A soma dos numeros impares de 1 a 100 e " << soma;
}