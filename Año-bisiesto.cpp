#include <iostream>
#include <cmath>
using namespace std; 

int main(){
    int year;

    //Solicitar un año al usuario
    cout << "Please enter a year." << endl;
    cin >> year;

    //Comprobar si el año es bisiesto o no
    if ( year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    } else if (year % 100 == 0)
    {
        cout << year << " is a common year." << endl;
    } else if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    } else 
    {
        cout << year << " is a common year." << endl;
    }

    return 0;
}