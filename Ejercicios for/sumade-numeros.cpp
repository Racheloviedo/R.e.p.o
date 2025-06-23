#include <iostream>
#include <cmath>
using namespace std;

//Solicita un número N al usuario y calcula la suma de los primeros N números naturales

int main(){
    //Declaracion de variables
    int N;
    float suma;

    //Pedir un numero al usuario
    cout << "Please enter a number." << endl;
    cin >> N;

    for(int i = 0; i <= N; i++){
        suma = suma + i;
    }

    cout << "The sum of the first: " << N << " natural numbers is: " << suma << endl;



    return 0;
}