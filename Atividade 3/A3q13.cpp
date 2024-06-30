/*Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere
que o N será sempre maior que ZERO.*/
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Escolha o valor: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
  
}