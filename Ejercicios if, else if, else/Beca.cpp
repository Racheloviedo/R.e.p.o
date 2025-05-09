#include <iostream> 
using namespace std;

int main(){
    int average, absences;

    //Se le pide al usuario su promedio total
    cout << "Please enter your total average." << endl;
    cin >> average;

    //Si los numeros son negativos muestre este mensaje
    if (average < 0)
    {
        cout << "That isn't a valid total average, try again." << endl;
        cin >> average;
    }

    //Se le pide al usuario la cantidad de faltas que tuvo en el año
    cout << "Now, please enter the number of absences you have." << endl;
    cin >> absences;

    //Si los numeros son negativos muestre este mensaje
    if (absences < 0)
    {
        cout << "That isn't a possible value, try again." << endl;
        cin >> absences;
    }

    //Condiciones para obtener una beca 
    if (average >= 85 && average <= 100 && absences <= 3)
    { 
        //Si el promedio esta entre 85 y 100 y las faltas son menores a 3 muestre este mensaje
        cout << "!Congratulations! you have been granted a scholarship." << endl;
    } else if (average >= 85 && average <= 100 && absences > 3)
    {
        //Si las faltas son mayores a 3 muestre este mensaje
        cout << "We are sorry to comunicate that you don't fulfill for 1 of the conditions for the scholarship." << endl;
    } else if (average < 85 && average <= 100 && absences <= 3)
    {
        ////Si el promedio es mayor a 85 muestre este mensaje
        cout << "We are sorry to comunicate that you don't fulfill for 1 of the conditions for the scholarship." << endl;
    } else 
    {
        //Si no cumple ninguna condicion muestre el siguiente mensaje
        cout << "We are sorry to inform that you didn't get the scholarship" << endl;
    } 

    return 0;
}