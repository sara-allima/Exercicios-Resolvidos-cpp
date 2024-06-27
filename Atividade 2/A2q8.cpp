#include <iostream>

using namespace std;

int main() {
    int usuario, senha;

    cout << "Digite o seu codigo de usuario: ";
    cin >> usuario;

    if(usuario != 1234) 
    {
        cout << "Usuario invalido!";
    } else
    {
        cout << "Digite sua senha: ";
        cin >> senha;

        if (senha != 9999)
        {
            cout << "Senha incorreta";            
        }
        
    }

    if (usuario == 1234 && senha == 9999)
    {
        cout << "Acesso permitido";
    }
}