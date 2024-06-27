/*Faça um algoritmo para ler as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que
fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula abaixo e escrever o conceito
do aluno de acordo com a tabela de conceitos mais abaixo:*/

/*Dessa vez as notas sao de 10 à 100 e não de 1 à 10*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, mediaExercicios, aproveitamento, conceito;

    cout << "Nota 1: ";
    cin >> n1; 

    cout << "Nota 2: ";
    cin >> n2;

    cout << "Notas 3: ";
    cin >> n3;

    cout << "Media dos exercicios: ";
    cin >> mediaExercicios;

    /*calculos*/
    aproveitamento = ((n1 + n2 * 2 + n3 * 3) + mediaExercicios ) / 7; 
    /*calculos*/

    /*condicionais dos conceitos*/
    if(aproveitamento >= 90) {
        cout << "Nota A";
    } else if (aproveitamento >= 75 && aproveitamento < 90)
    {
        cout << "Nota B";
    } else if (aproveitamento >= 60 && aproveitamento < 75)
    {
        cout << "Nota C";
    } else {
        cout << "Nota D";
    }
    /*condicionais dos conceitos*/

}