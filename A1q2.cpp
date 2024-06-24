/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a
área do retângulo.*/

#include <iostream> 

using namespace std;

int main() {
    float base, altura, area;

    /*entradas*/
    cout << "Base: ";
    cin >> base;

    cout << "Altura: ";
    cin >> altura;
    /*entradas*/
    
    /*calculo*/
    area = base * altura;
    /*calculo*/

    cout << "A area do retangulo e de " << area;
}