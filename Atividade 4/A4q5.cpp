#include <iostream>

using namespace std;

int main() {
    float n1[10], n2[10], n3[10], n4[10], media[10], passaram;

    for (int i = 0; i < 10; i++)
    {

        cout << "Aluno " << i + 1 << endl;

        cout << "Nota 1: ";
        cin >> n1[i];

        cout << "Nota 2: ";
        cin >> n2[i];

        cout << "Nota 3: ";
        cin >> n3[i];

        cout << "Nota 4: ";
        cin >> n4[i];

        media[i] = (n1[i] + n2[i] + n3[i] + n4[i]) / 4;

        if (media[i] >= 7)
        {
            passaram++;
        }
    }
    
    cout << passaram << " alunos ficaram com media 7 ou mais";
}