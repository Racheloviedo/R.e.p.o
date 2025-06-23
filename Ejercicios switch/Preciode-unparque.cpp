#include <iostream>
using namespace std;

int main(){
    int age;

    //Solicitar al usuario 
    cout << "Enter your age to received the price of your ticket." << endl;
    cin >> age;

    //Precios de tickets por edad 
    if (age < 5 && age > 0)
    {
        cout << "Free for children younger than 5. You don't have to pay." << endl;
    } else if (age >=5 && age <= 12 )
    {
        cout << "The ticket price is of $5." << endl;
    } else if (age > 12)
    {
        cout << "The ticket price is of $10." << endl;
    }

    return 0;
}