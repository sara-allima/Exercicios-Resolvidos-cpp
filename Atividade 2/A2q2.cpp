/*Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos.
Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.*/
#include <iostream>

using namespace std;

int main() {
    float totaleleitores, nulos, brancos, validos, pnulos, pbrancos, pvalidos;

    cout << "Total de eleitores: ";
    cin >> totaleleitores;

    cout << "Votos nulos: ";
    cin >> nulos;

    cout << "Votos brancos: ";
    cin >> brancos;

    cout << "Votos validos: ";
    cin >> validos;

    pnulos = (nulos*100) / totaleleitores;
    pbrancos = (brancos*100) / totaleleitores;
    pvalidos = (validos*100) / totaleleitores;

    cout << pnulos << "%" << " nulos" << endl;
    cout << pbrancos << "%" << " brancos" << endl;
    cout << pvalidos << "%" << " nulos" << endl;
}