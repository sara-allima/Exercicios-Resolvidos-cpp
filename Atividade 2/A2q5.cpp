/*Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as idades dos homens
serão sempre diferentes entre si, bem como as das mulheres. Calcule e escreva a soma das idades do homem
mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.*/
#include <iostream>

using namespace std;

int main() {
    int h1, h2, hnovo, hvelho, m1, m2, mvelha, mnova;

    cout << "Idade do homem 1: ";
    cin >> h1;

    cout << "Idade do homem 2: ";
    cin >> h2;

    if (h1 > h2)
    {
        hvelho = h1;
        hnovo = h2;
    } else {
        hvelho = h2;
        hnovo = h1;
    }

    cout << "Idade da mulher 1: ";
    cin >> m1;

    cout << "Idade da mulher 2: ";
    cin >> m2;
    
    if (m1 > m2)
    {
        mvelha = m1;
        mnova = m2;
    } else {
        mvelha = m2;
        mnova = m1;
    }

    cout << "Homem mais evelho + mulher mais nova: " << hvelho + mnova << endl;
    cout << "Homem mais novo * mulher main velha: " << hnovo * mvelha;
    /*Se xx for maior que hvelho, hvelho recebe xxx*/
}