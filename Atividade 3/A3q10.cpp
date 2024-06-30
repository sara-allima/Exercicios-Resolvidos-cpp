/*Some todos os números pares de 0 a 1000.*/
#include <iostream>

using namespace std;

int main() {
    int soma;

    for(int i = 0; i < 1000; i++) {
        if (i % 2 == 0)
        {
            soma+=i;

            cout << i << " = " << soma << endl;
        }
        
    }
}