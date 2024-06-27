/*Escrever o algoritmo em portugol sugerido na atividade para C++*/

#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a < a + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
        {
            cout << "Triangulo Equilatero";
        } else if (a == b || b == c || a == c)
        {
            cout << "Triangulo Isosceles";
        } else {
            cout << "Triangulo Escaleno";
        }
    } else {
        cout << "Nao e possivel formar um triangulo";
    }
    
}

/*Gabarito:
Não é possivel formar
Escaleno
Não é possivel formar
Equilatero
Isosceles*/