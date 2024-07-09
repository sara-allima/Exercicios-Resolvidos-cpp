/*03. Faça um Programa que leia 4 notas, mostre as notas e a média na tela.*/

#include <iostream>

using namespace std;

int main() {
    float notas[4], soma, media;

    for (int i = 0; i < sizeof(notas) / 4; i++)
    {
        cout << "Nota " << i + 1 << ": " << endl;
        cin >> notas[i];

        soma+=notas[i];
    }
    
    media = soma / 4;

    for (int i = 0; i < 4; i++)
    {
        cout << "Nota " << i + 1 << ": " << notas[i] << endl;
    }
    
    cout << "Sua media foi de " << media;
}