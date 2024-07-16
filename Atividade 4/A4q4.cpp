/*04.Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu
respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.*/
#include <iostream>

using namespace std;

int main(){
    int idade[5];
    float altura[5];

    for(int i = 0; i < 5; i++) //for somente para atribuição de valores
    {
        cout << "Idade: ";
        cin >> idade[i];

        cout << "Altura: ";
        cin >> altura[i];
    }

    for (int a = 4; a >= 0; a--)
    {
        cout << idade[a] << endl;
        cout << altura[a] << endl;
    }
    
}