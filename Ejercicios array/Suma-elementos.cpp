#include <iostream>
#include <cmath>
using namespace std;

//Suma de elementos 
//Escribe un programa que almacene N números en un arreglo y calcule la suma de sus elementos.
int main(){
    const int max = 100;
    int number[max];
    int n, suma = 0;
    cout << "How many numbers you want to add? (the max is 100)" << endl;
    cin >> n;

    if (n > max || n <= 0 ){
        cout << "Invalid option, number must be between 1-100." << endl;
        return 1;
    }

    cout << "Please enter the numbers you want to add. " << endl;
    for(int i = 0; i < n; i++){
        cout << "Number " << i + 1 <<" : " << endl;
        cin >> number[i]
        suma += number[i];
    }

    cout << "The sum of the numbers is: " << suma << endl;
    

    return 0;

}



