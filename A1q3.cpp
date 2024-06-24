/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula
de conversão é F ← C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em
Celsius.*/

#include <iostream>

using namespace std;

int main() {
    float c, f;

    cout << "Temperatura em Celsius: ";
    cin >> c;

    f = (c * 9) / 5 + 32;

    cout << f;
}