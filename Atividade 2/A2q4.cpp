/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3%
sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.*/
#include <iostream>

using namespace std;

int main() {
    float salfix, valorvendas, comissao, saltotal;

    cout << "Qual o valor do seu salario?" << endl;
    cin >> salfix;

    cout << "Qual o valor total das suas vendas esse mes?" << endl;
    cin >> valorvendas;

    if (valorvendas <= 1500)
    {
        comissao = 0.03 * valorvendas;
    } else {
        comissao = 0.05 * valorvendas;
    }

    saltotal = salfix + comissao;

    cout << "R$" << saltotal;
    
}