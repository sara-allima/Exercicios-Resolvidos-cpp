/*Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00,
receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade
(em Kg) de morangos e a quantidade(em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.*/
#include <iostream>

using namespace std;

int main() {
    float kgmorango, kgmacas, pkgmorango, pkgmaca, precototal, kgtotal, desconto;

    cout << "Quantos kg de morango?" << endl;
    cin >> kgmorango;

    cout << "Quantos kg de macas?" <<endl;
    cin >> kgmacas;

    /*condicionais preço dos kg*/
    if (kgmorango <= 5)
    {
        pkgmorango = 2.5 * kgmorango;
    } else {
        pkgmorango = 2.2 * kgmorango;
    }

    if (kgmacas <= 5)
    {
        pkgmaca = 1.8 * kgmacas;
    } else
    {
        pkgmaca = 1.5 * kgmacas;
    }
    /*condicionais preço dos kg*/

    /*calculos*/
    precototal = pkgmaca + pkgmorango;
    kgtotal = kgmacas + kgmorango;
    /*calculos*/

    /*condicional do desconto*/
    if (kgtotal > 8 || precototal > 25)
    {
        desconto = 0.1 * precototal;
    }
    /*condicional do desconto*/

    precototal = precototal - desconto;

    cout << precototal;
}