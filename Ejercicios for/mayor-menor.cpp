#include <iostream>
using namespace std;

//Numero mayor y menor
//Llena un arreglo con N números y encuentra el número mayor y el menor.

int main(){
    const int max = 50;
    int value[max];
    int compare, greater, lesser;

    cout << "How many numbers you want to compare? (the max is 50)" << endl;
    cin >> compare; 

    cout << "Write a series of numbers. " << endl;
    for(int i=0; i < compare; i++){
        cout << "Number " << i + 1 << " : " << endl;
        cin >> value[i];
    }
    greater = value[0];
    lesser = value[0];
    for(int i = 1; i < compare; ++i){
        if (value[i] > greater){
            greater = value[i];
        }
        if (value[i] < lesser){
            lesser = value[i];
        }
    }
    cout << greater << " is the greater number." << endl;
    cout << lesser << " is the lesser number." << endl;


    return 0;
}