#include <iostream>

using namespace std;

int main(){
    int a, b, soma = 0;

    cout << "Digite o valor de inicial: ";
    cin >> a;

    cout << "Digite o valor final: ";
    cin >> b;

    for(int i = a; i <= b; i++)
    {
        soma = soma + i;
    }

    cout << soma;
}