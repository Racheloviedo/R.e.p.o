#include <iostream> 
using namespace std;

int main (){
    float temp;
    
    //Pedir temperatura al usuario
    cout << "Please enter the temperature of your zone."<< endl;
    cin >> temp;
    
    //Evaluacion de la temperatura 
    if (temp < 15)
    {
        cout << "It's cold outside, better get a sweater." << endl;
    } else if (temp >= 15 && temp <= 25)
    {
        cout << "It's mild outside, good weather to go to the park." << endl;
    } else if (temp > 25)
    {
        cout << "It's pretty hot, you could get a cold drink." << endl;
    }
    
    return 0;
}