#include <iostream>

using namespace std;

int main() {
    int anos, meses, dias, total;

    cout << "Quantos anos voce tem?" << endl;
    cin >> anos;

    cout << "Quantos meses?" << endl;
    cin >> meses;

    cout << "Dias?" << endl;
    cin >> dias;

    anos = anos * 365;
    meses = meses * 30;
    total = anos + meses + dias;

    cout << "Sua idade em dias e de " << total;
}