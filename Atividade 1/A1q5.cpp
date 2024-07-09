/*Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera.
Utilize a fórmula VOLUME ← (4 / 3) * 3.14159 * (RAIO ↑ 3).*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float volume, raio;

    cout << "Qual o raio da esfera?" << endl;
    cin >> raio;
 
    volume = (4 * 3.14159 * pow(raio, 3)) / 3;

    cout << volume;
}