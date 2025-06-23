#include <iostream>
using namespace std;

//Adivina el numero
int main(){
//Genera un número aleatorio entre 1 y 100.
//El usuario debe adivinarlo, y el programa debe indicar si el número es mayor o menor hasta que lo acierte.

int correctNumber = 67;
int givenNumber;

cout << "Guess the number between 1 and 100." << endl;
cin >> givenNumber;
do {
    if (givenNumber > correctNumber){
        cout << givenNumber << " It's greater than the correct number. " << endl;
        cout << " Try again. " << endl;
        cin >> givenNumber;
    } else if (givenNumber < correctNumber){
        cout << givenNumber << " It's less than the correct number." << endl;
        cout << " Try again. " << endl;
        cin >> givenNumber;
    }
} while (givenNumber != correctNumber);

cout << "Congratulations, you've guessed the number." << endl;
    return 0;
}