/*Modifique o exercício anterior para aceitar somente valores maiores que 0 para N. Caso o valor
informado (para N) não seja maior que 0, deverá ser lido um novo valor para N.*/
#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Insira um valor: ";
    cin >> n;

    while (n == 0)
    {
        cout << "Valor invalido." << endl;
        cout << "Insira um novo valor: ";
        cin >> n;
    }

    for(int i = 0; i <= n; i++) {
        cout << i << endl;
    }
    
}