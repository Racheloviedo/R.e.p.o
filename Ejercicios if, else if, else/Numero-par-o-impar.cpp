#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m;
    //solicita un numero al usuario
    cout << "Please enter a number" << endl;
    cin >> m;

    //Determinar si m es par o impar
    if (m % 2 == 0)
    {
        cout << m << " is an even number." << endl;
    } else
    {
        cout << m << " is an odd number." << endl;
    }


    return 0;
}