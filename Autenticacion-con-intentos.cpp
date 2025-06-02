#include <iostream>
using namespace std;

int main() {
    string user = " ";
    string password = " ";

    //Pedirle al usuario los datos de usuario y contraseña
    cout << "Please enter the username." << endl;
    cin >> user;
    cout << "Now, please enter the password." << endl;
    cin >> password;

    //Primer intento
    if (user == "user4587" && password == "2025")
    {
        cout << "Welcome, " << user << "." << endl; 
    } else 
    {
        //Segundo intento
        cout << "Acces denied. Try again." << endl;
        cout << "Please enter the username." << endl;
        cin >> user;
        cout << "Now, please enter the password." << endl;
        cin >> password;
    } if (user == "user4587" && password == "2025")
    {
        cout << "Welcome, " << user << "." << endl; 
    } else
    {
        //Tercer intento
        cout << "Acces denied. Try again." << endl;
        cout << "Please enter the username." << endl;
        cin >> user;
        cout << "Now, please enter the password." << endl;
        cin >> password;
    } if (user == "user4587" && password == "2025")
    {
        cout << "Welcome, " << user << "." << endl; 
    } else 
    {
        cout << "Acces denied. Your tree attempts have run out." << endl;
    }

    return 0;
}
