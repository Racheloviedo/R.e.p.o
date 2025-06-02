#include <iostream>
using namespace std;

int main(){
    string password = " ";
    string m = " ";

    //Pedir al usuario dos contraseña
    cout << "Please enter the password." << endl;
    cin >> password;
    if (password == "2025")
    {
        cout << "Please, enter the other password for double verification." << endl;
        cin >> m;
        if (m == "12345")
        {
            cout << "Welcome, user. Wait a moment for the next steps." << endl;
        } else 
        {
            cout << "Wrong password. Acces denied" << endl;
        }

    } else 
    {
        cout << "Wrong password. Acces denied." << endl;
    }

    return 0;
}