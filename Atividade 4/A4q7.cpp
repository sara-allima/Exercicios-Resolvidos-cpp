/*07. Escreva um programa para preencher um vetor A de 10 elementos inteiros e um valor X. Em
seguida escrever na tela "ACHEI" se o valor X existir em A e "NÃO ACHEI" caso contrário.*/
#include <iostream>

using namespace std;

int main() {
    int a[10], x, achei;

    cout << "Escolha um valor: ";
    cin >> x;

    for (int i = 0; i < sizeof(a) / 4; i++)
    {
        a[i] = (i * 3) + 5;

        if (a[i] == x)
        {
            achei++;
        }
    }

    if (achei == 1) {
        cout << "ACHEI";
    } else {
        cout << "NAO ACHEI";
    }
    
}