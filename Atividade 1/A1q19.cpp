#include <iostream>

using namespace std;

int main(){
    float velocidade, distancia, tempo;

    cout << "Qual a distancia percorrida pelo projetil? (quilometros)" << endl;
    cin >> distancia;

    cout << "Qual o espaco de tempo (minutos)?" << endl;
    cin >> tempo;

    velocidade = (distancia * 1000) / (tempo * 60);

    cout << "A velocidade do projetil foi de " << velocidade << " m/s";
}