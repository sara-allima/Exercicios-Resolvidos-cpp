/*Faça um algoritmo para calcular a distância entre dois pontos. Entre com o valor de X1, X2, Y1,
Y2*/
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    float d, x1, x2, y1, y2;

    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;

    d =sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << d;
}