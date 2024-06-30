/*Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (incluindo os
valores 10 e 20 no intervalo) e quantos deles estão fora deste intervalo.*/
#include <iostream>

using namespace std;

int main() {
    int n, intervalo;

    for (int i = 0; i < 10; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> n;

        if (n >= 10 && n <= 20)
        {
            intervalo++;
        }
        
    }

    cout << intervalo;
    
}