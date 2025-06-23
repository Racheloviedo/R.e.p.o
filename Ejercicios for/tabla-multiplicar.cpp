#include <iostream>
#include <cmath>
using namespace std;

//Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.

int main(){
    int number;
    float tabla;

    cout << "Please insert a number." << endl;
    cin >> number;

    cout << "Multiplication tables of " << number << endl;
    for(int i = 0; i <= 10; ++i){
        tabla = i*number;
        cout << tabla << endl;

    }
    c

    return 0;
}