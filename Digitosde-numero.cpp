#include <iostream>
using namespace std;

//Dígitos de un Número
//Pide un número al usuario y muestra cuántos dígitos tiene.
int main(){
    int digit = 0;
    int number, original;
    cout << "Hello!, please insert a number." << endl;
    cin >> number;
    original = number;

if (number == 0){
    digit = 1;
} else {
    
    while(number > 0 ){
       number = number / 10;
       digit++;
    }
}
    
cout << original << " has " << digit << " digits." << endl;
    return 0;
}