/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica
de um carro, calcular e escrever o custo final ao consumidor.*/

#include <iostream>

using namespace std;

int main() {
    float custototal, custofabrica, percdistribuidor, impostos;

    cout << "Qual o custo de fabrica do carro?" << endl;
    cin >> custofabrica;

    percdistribuidor = 0.28 * custofabrica;
    impostos = 0.45 * custofabrica;

    custototal = custofabrica + percdistribuidor + impostos;

    cout << "O custo total do carro e de R$" << custofabrica + percdistribuidor + impostos;
}