#include <iostream> 
using namespace std;


int main(){
    int speed;

    //Solicitar velocidad al usuario
    cout << "Enter the speed at wich you are driving." << endl;
    cin >> speed;

    //Multa que obtiene dependiendo de su velocidad
    if (speed > 60)
    {
        cout << "Pay a tax of $100." << endl;
    } else if (speed > 80)
    {
        cout << "Pay a tax of $150." << endl;
    } else if (speed < 60)
    {
        cout << " You don't have to pay a tax" << endl;
    }

    return 0;
}