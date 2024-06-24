#include <iostream>

using namespace std;

int main(){
    float eleitores, vbrancos, vnulos, vvalidos, pb, pn, pv;

    cout << "Qual a quantidade total de eleitores?" << endl;
    cin >> eleitores;

    cout << "Total de votos em branco:" << endl;
    cin >> vbrancos;

    cout << "Total de votos nulos: " << endl;
    cin >> vnulos;

    cout << "Total de votos validos:" << endl;
    cin >> vvalidos;

    //Calculos
    pb = (vbrancos / eleitores ) * 100;
    pn = (vnulos / eleitores) * 100;
    pv = (vvalidos / eleitores) * 100;
    //Calculos

    cout << pb <<"% " << "de votos em branco" << endl;
    cout << pn << "% " << "de votos nulos" << endl;
    cout << pv << "%" << " de votos validos" << endl;  
}