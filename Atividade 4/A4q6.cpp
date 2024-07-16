/*06. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20
elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros
vetores.*/
#include <iostream>

using namespace std;

int main() {
    int pares[10], impares[10], total[20];
    int j = 0, k = 0, l = 0;

    for (int i = 0; i < 10; i++)
    {
        pares[i] = i * 2;
        impares[i] = (i * 2) + 1;
    }

    while (l < 20)
    {
        if (l % 2 == 0)
        {
            total[l] = pares[j];
            j++;
        } else {
            total[l] = impares[k];
            k++;
        }
        
        cout << total[l] << endl;
        l++;
    }
    
    
}