#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float grade;

    //Solicitar al usuario su nota
    cout << "Please enter your grade" << endl;
    cin >> grade;

    //El valor de la nota solo puede estar entre 0 - 100
    if (grade < 0 || grade > 100)
    {
        cout << "error: this value is not valid as a grade" << endl;
        cout << "Please enter a grade between the values of 0 and 100." << endl;
        cin >> grade;
    }
    

    //Mostrar si la nota es aprobatorio o no 
    if (grade >= 60)
    {
        cout << "You have passed." << endl;
    } else if (grade <= 59)
    {
        cout << "You have failed" << endl;
    }

    return 0;
}