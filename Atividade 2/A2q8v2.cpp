/*Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja diferente de um código armazenado
internamente no algoritmo (igual a 1234) deve ser apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja correto,
deve ser lido outro valor que é a senha. Se esta senha estiver incorreta (a certa é 9999) deve ser mostrada a mensagem
‘senha incorreta’. Caso a senha esteja correta, deve ser mostrada a mensagem ‘Acesso permitido’.*/

/*Esse é o segundo jeito que eu consegui desenvolver o problema 8*/
#include <iostream>

using namespace std;

int main() {
    int user, senha, userCorrect = 1234, senhaCorrect = 9999;

    cout << "Codigo de Usuario: ";
    cin >> user;

    if(user == userCorrect) {
        cout << "Senha: ";
        cin >> senha;

        if (senha == senhaCorrect)
        {
            cout << "Acesso permitido";
        } else
        {
            cout << "Senha incorreta";
        }
        
    } else {
        cout << "Usuario invalido!";
    }
}