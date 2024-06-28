/*Faça um algoritmo que some todos os números de 1 a 900.*/
#include <iostream>

using namespace std;

int main() {
    int aux;

    for (int i = 1; i <= 900; i++)
    {
        aux+=i;
    }
    
        cout << "A soma total dos algarismos de 1 a 900 e "<< aux << endl;
}