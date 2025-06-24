#include <iostream>
using namespace std;

//Función de Suma
//Escribe una función que reciba dos números y devuelva su suma.

float suma(float a, float b){
    return a + b;
}

int main(){
    float number1, number2;

    cout << "Please insert the numbers for the addition" << endl;
    cout << "first number: " << endl;
    cin >> number1;
    cout << "second number: " << endl;
    cin >> number2;

    cout <<"----Result----" << endl;
    cout << suma(number1, number2) << endl;
    
    return 0;
}