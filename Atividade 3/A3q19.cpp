/*Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo
que permita a entrada das seguintes informações: a) o número total de mercadorias no estoque; b)
o valor de cada mercadoria. Ao final imprimir o valor total em estoque e a média de valor das
mercadorias.*/
#include <iostream>

using namespace std;

int main() {
    int qtEstoque;
    float valor, totalestoque, media;

    cout << "Qual a quantidade de mercadoria em estoque?" << endl;
    cin >> qtEstoque;

    for (int i = 0; i < qtEstoque; i++)
    {
        cout << "Qual o valor da mercadoria " << i + 1 << "? " << endl;
        cin >> valor;

        totalestoque+=valor;
    }
    
    media = totalestoque / qtEstoque;

    cout << "O valor total em estoque e de R$" << totalestoque << endl;
    cout << "A media de valor das mercadorias e de R$" << media;
}