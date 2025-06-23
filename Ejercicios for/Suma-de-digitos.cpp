#include <iostream>
#include <cmath>
using namespace std;

//Solicita un número al usuario y calcula la suma de sus dígitos.
// notas: la division entera descarta los decimales
// debido al sistema decimal: %10 extrae y /=10 quita digitos

int main(){
    int number;
    cout << "Please insert a number." << endl;
    cin >> number;

    int suma = 0;

    for(; number > 0; number/=10 ){
        suma += number % 10; //extrae el ultimo digito y lo suma
        // number/=10 elimina el ultimo digito al dividir entre 10
    }
    cout << "The adition of al the digits if the number is " << suma << endl;

    return 0;
}