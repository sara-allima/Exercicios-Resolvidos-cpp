/*05. Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a
média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.*/
#include <iostream>

using namespace std;

int main() {
    float n1[10], n2[10], n3[10], n4[10], media[10], soma, passados;

    for (int i = 0; i < 10; i++)
    {
        cout << "Aluno " << i+1 << endl;

        cout << "Primeira nota: ";
        cin >> n1[i];

        cout << "Segunda nota: ";
        cin >> n2[i];

        cout << "Terceira nota: ";
        cin >> n3[i];

        cout << "Quarta nota: ";
        cin >> n4[i];

        soma = n1[i] + n2[i] + n3[i] + n4[i];
        media[i] = soma / 4;

        soma = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        if (media[i] >= 7)
        {
            passados+=1;
        }
        
    }
    
    cout << "Quantidade de alunos passados: " << passados;
}