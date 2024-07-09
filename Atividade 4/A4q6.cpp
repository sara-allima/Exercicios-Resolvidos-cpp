#include <iostream>

using namespace std;

int main() {
    int pares[10], impares[10], total[20];
    int k = 0, l = 0, m = 0; 

    for (int i = 0; i < 10; i++) // Atribução
    {
        pares[i] = i * 2;
        impares[i] = (i * 2) + 1;
    }

    while (m < 20)
    {
        if (m % 2 == 0 )
        {
            total[m] = pares[k];
            k++;
        } else {
            total[m] = impares[l];
            l++;
        }
        
        cout << total[m] << endl;
        m++;
    }
    
    
    
}