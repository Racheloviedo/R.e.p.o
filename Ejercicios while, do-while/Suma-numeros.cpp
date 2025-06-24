#include <iostream>
#include <cmath>
using namespace std;

//Suma de numeros 
int main(){
//Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.
int number, suma = 0;
cout << "Ingrese los numeros que desee sumar. No olvide ingresar un 0." << endl;

do {
cin >> number;
suma += number;

} while (number != 0);

cout << "La suma es: " << suma << endl;

    return 0;
}
