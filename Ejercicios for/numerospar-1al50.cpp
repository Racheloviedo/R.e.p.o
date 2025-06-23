#include <iostream>
using namespace std;
//Muestra en pantalla los números pares del 1 al 50.

int main(){
    cout << " Number from 1 to 50: "  << endl;
    for(int i = 1; i <= 50; i++){
        if (i % 2 == 0){
            
            cout << i << endl;

        }
        
    } 

    return 0;
}