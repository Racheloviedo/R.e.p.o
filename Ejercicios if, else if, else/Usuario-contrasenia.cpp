#include <iostream>
using namespace std;

int main(){
    //ingrese usuario y contrasena
    string password = " ";
    string username = " ";

    //Solicitar usuario y contrasenia 
    cout << "Please, enter your username." << endl;
    cin >> username;
    cout << "Now enter the password." << endl;
    cin >> password;

    //Evaluacion de si ambos datos (usuario y contrasenia) son correctos
    if (username == "user127" && password == "pass4567" )
    {
        //si el nombre de usuario es "user127" muestre este mensaje
        cout << "Acces granted, welcome user127." << endl;
    } else
    {
        // si el nombre de usuario es cualquier otra muestre este mensaje
        cout << "Acces denied, try again." << endl;
    }

    
    


    return 0;
}