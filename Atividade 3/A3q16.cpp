/*Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem
ser somados. Escreva o valor final da soma efetuada.*/
#include <iostream>

using namespace std;

int main() {
    int n, soma;

    for (int i = 0; i < 10; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> n;

        if (n < 40)
        {
            soma+=n;
        }
        
    }

    cout << "Resultado: " << soma;
    
}