#include <iostream>
using namespace std;

int main(){
    double weight;

    //Pide al usuario el peso de su paquete
    cout << "Please enter the weight of your package." << endl;
    cin >> weight;

    //Tarifas de envio dependiendo del peso 
    if (weight <= 5)
    {
        cout << "Your total amount is of $5." << endl;
    } else if (weight == 6 && weight <= 10)
    {
        cout << "Your total amount is of $10." << endl;
    } else if (weight > 10)
    {
        cout << "Your total amount is of $15." << endl;
    }

    return 0;
} 