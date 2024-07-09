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