#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double cost, result;
    

    //Solicitar el monto total al usuario 
    cout << "Please enter the total amount of your purchase. " << endl;
    cin >> cost;

    //Aplicar descuento del 10% a valores mayores de $100
    if (cost > 100)
    {
        result = cost - (cost*0.10);
        cout << "Your total amount has reduce to " << result << endl;
    } else 
    {
        cout << "Your total amount stays the same." << endl;
    }

    return 0;
}