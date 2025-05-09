#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double number, n, m;

    //Solicitar numero al usuario 
    cout << "Please enter a number" << endl;
    cin >> n;

    //Solicitar un segundo numero al usuario
    cout << "Now enter another number" << endl;
    cin >> m;

    //Determinar cual de los dos numeros es mayor
    if (n > m)
    {
        cout << n << " is greater, and " << m << " is less." << endl;
    } else if (m > n)
    {
        cout << m << " is greater, and " << n << " is less." << endl;
    } else if (m == n )
    {
        cout << m << " and " << n << " are equal." << endl;
    }


    return 0;
}