#include <iostream>
using namespace std;

int main(){
    float a, b, c;

    //Solicitar al usuario la medida de los lados a, b y c de un triangulo
    cout << "Please enter the length of the tree sides of your triangle." << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    //Clasificacion de triangulos segun su medida
    if (a == b && b == c && c == a)
    {
        cout << "It's a Equilateral triangle." << endl;
    } else if (a == b || a == c || b == c ) 
    {
        cout << "It's an Isosceles triangle." << endl;
    } else 
    {
        cout << "It's an Scalene triangle." << endl;
    }

    return 0;
}