#include <iostream>
#include <cmath>
using namespace std;

//Pide dos números base y exponente, y calcula base^exponente sin usar la función pow()

int main(){
    int numberA, numberB;
    int power, result = 1;

    cout << "Please enter a number to be the base: " << endl;
    cin >> numberA;
    cout << "Now, a number to be the exponent: " << endl;
    cin >> numberB;

    for(int i = 0; i < numberB; ++i){
        result *= numberA;
    }

    cout << numberA << " to the power of " << numberB << " is: " << result << endl;

    

    return 0;
}