#include <iostream>
using namespace std;

int main(){
    int day;

    //Solicitar al usuario un numero del 1 al 7
    cout << "Please enter a number between 1 and 7." << endl;
    cin >> day;

    //Registrar si el numero equivale a un dia laboral (lunes a viernes) o fin de semana
    if (day ==1 && day <= 5)
    {
        cout << day << " belongs to a workday." << endl;
    } else if (day == 6 || day == 7)
    {
        cout << day << " belongs to the weekend." << endl;
    }

    //Clasificacion por dias. Ver a que dia equivale el numero 
    if (day == 1)
    {
        cout << day << " is monday." << endl;
    } else if (day == 2)
    {
        cout << day << " is tuesday." << endl;
    } else if (day == 3)
    {
        cout << day << " is Wednesday." << endl;
    } else if (day == 4)
    {
        cout << day << " is thursday." << endl;
    } else if (day == 5)
    {
        cout << day << " is friday." << endl;
    } else if (day == 6)
    {
        cout << day << " is saturday." << endl;
    } else if (day == 7)
    {
        cout << day << " is sunday." << endl;
    }

    return 0;
}