/*Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula
de conversão é C ← ((F – 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura em
Celsius.*/

#include <iostream>

using namespace std;

int main() {
    float c, f;

    cout << "Temperatura em Fahrenheit: ";
    cin >> f;

    c = ((f - 32) * 5) / 9;

    cout << c;
}