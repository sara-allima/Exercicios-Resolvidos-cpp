/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
Calcular e escrever o valor do novo salário.*/

#include <iostream>

using namespace std;

int main() {
    float salario, reajuste, porcentagem, novosalario;

    cout << "Qual o valor do seu salario atual?" << endl;
    cin >> salario;

    cout << "Porcentagem do reajuste: ";
    cin >> reajuste;

    porcentagem = (reajuste / 100) * salario;

    novosalario = salario + porcentagem;

    cout << "Seu salario reajustado e de R$" << novosalario;
}