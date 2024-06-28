/*Reescreva o exercício anterior utilizando a estrutura ENQUANTO.*/

/*Usando o loop while*/
#include <iostream>

using namespace std;

int main() {
    int v1, v2;

    cout << "Primeiro valor: ";
    cin >> v1;

    cout << "Segundo valor: ";
    cin >> v2;

    while (v2 == 0)
    {
        cout << "0 nao e um valor permitido." << endl;
        cout << "Entre com um novo valor: ";
        cin >> v2;
    }
    
    cout << "O resultado e " << v1 / v2;

}