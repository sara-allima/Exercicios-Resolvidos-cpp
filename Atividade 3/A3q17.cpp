/*Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo
os valores lidos na soma). Considere que o segundo valor lido será sempre maior que o primeiro
valor lido.*/
#include <iostream>

using namespace std;

int main() {
    int a, b, soma;

    cout << "Primeiro valor: ";
    cin >> a;

    cout << "Segundo valor: ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        soma+=i;
    }

    cout << soma;
    
}