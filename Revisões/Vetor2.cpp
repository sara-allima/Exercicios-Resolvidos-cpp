#include <iostream>

using namespace std;

int main() {
    int max;

    cout << "Qual o numero maximo?" << endl;
    cin >> max;

    while (max % 2 == 0)
    {
        cout << "O numero precisa ser impar." << endl << "Insira um novo numero: ";
        cin >> max;
    }

    for (int i = 0; i <= max / 2; i++) //for contagem de linhas
    {
        for (int j = 0; j < i; j++) //for espaços em branco
        {
            cout << "  ";
        }

        for (int j = i + 1; j <= max - i; j++)
        {
            cout << j << " ";
        }
        
        cout << endl;
    }
    
    
}