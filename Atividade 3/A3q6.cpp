/*Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja,
para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo
valor lido. (utilizar a estrutura REPITA).*/

#include <iostream>

using namespace std;

int main() {
    int v1, v2, soma;
    
    cout << "Primeiro valor: ";
    cin >> v1;

    cout << "Segundo valor: ";
    cin >> v2;

    if (v2 == 0)
    {
        for (int i = 0; i < 999999; i++)
        {
            cout << "0 nao e um valor permitido." << endl;
            cout << "Entre com um novo valor: ";
            cin >> v2;

            if (v2 != 0)
            {
                break;
            }
            
        }
        
    }

    cout << "O resultado e " << v1 / v2;
    
}