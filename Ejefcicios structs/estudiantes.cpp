#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//**Registro de Estudiantes
//Crea una estructura `Estudiante` con nombre, edad y promedio. Luego, pide datos para `N` estudiantes y muéstralos

int main(){
    int n;
    struct Student{
        string name;
        int edad;
        float promedio;

    };

    cout <<"Ingrese cantidad de estudiantes a registrar." << endl;
    cin >> n;
    cin.ignore(); //limpiar buffer

    Student students[n]; //arreglo de la estructura

    
    for (int i = 0; i < n; i++){
        cout << "\n Registro de estudiantes " << i + 1 << endl;
        cout << "Nombre: " << endl;
        getline(cin, students[i].name); //usado para string 
        cout << "Edad: " << endl;
        cin >> students[i].edad;
        cout << "Promedio: " << endl;
        cin >> students[i].promedio;

        cin.ignore(); //limpiar buffer
    } 

    cout << "\n====Registro====\n" << endl;
    for(int i = 0; i < n; i++){
        cout << "Nombre: " << students[i].name << endl;
        cout << "Edad: " << students[i].edad << endl;
        cout << "Promedio: " << students[i].promedio << endl;

    }

    return 0;
}