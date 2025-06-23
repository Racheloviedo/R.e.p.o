#include <iostream>
using namespace std;

int main(){
    float grade;

    //Solicitar la nota al usuario
    cout << "Please enter your grade. The range is 0-100" << endl;
    cin >> grade;

    //Conversion a de la nota a letra 
    if (grade >= 90 && grade <= 100)
    {
        cout << grade << " is equal to A, excelent grade." << endl;
    } else if (grade <= 89 && grade >= 60)
    {
        cout << grade << " is equal to B, congratulations." << endl;
    } else if (grade <= 59 && grade >= 50)
    {
        cout << grade << " is equal to C, good job." << endl;
    } else if (grade <= 49 && grade >= 30)
    {
        cout << grade << " is equal to D, do better the next time." << endl;
    } else if (grade <= 29 && grade >= 0)
    {
        cout << grade << " is equivalent to F, you have failed." << endl;
    }
    return 0;
}