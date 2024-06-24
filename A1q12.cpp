/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele
efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de
suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário
final do vendedor.*/

#include <iostream>

using namespace std;

int main() {
    float salfixo, comfix, carrosvendidos, valortotalvendas, calcomissao, percvaltotal, salariofinal;

    cout << "Quantos carros voce vendeu?" << endl;
    cin >> carrosvendidos;

    cout << "Qual o valor total de suas vendas?" << endl;
    cin >> valortotalvendas;

    cout << "Qual o seu salario fixo?" << endl;
    cin >> salfixo;

    cout << "Qual o valor da sua comissao fixa (R$)?" << endl;
    cin >> comfix;

    

    calcomissao = comfix * carrosvendidos;
    percvaltotal = 0.05 * valortotalvendas;
    
    salariofinal = salfixo + calcomissao + percvaltotal;

    cout << salariofinal;
}