#include <iostream>
using namespace std;

//Menu interactivo
//Crea un menú que se repita hasta que el usuario elija la opción de salir.

int main(){
     int menuGlobal, option;
    
     do {
        cout << "---Menu McDonalds---" << endl;
        cout << "---1. Menu manana ---" << endl;
        cout << "---2. Menu tarde ---" << endl;
        cout << "---3. Menu noche ---" << endl;
        cout << "---4. salir ---" << endl;
        cout << "Que desea ver." << endl;
        cin >> menuGlobal;
        if(menuGlobal != 4){
         switch(menuGlobal){
            case 1:
            do{cout << "---Menu manana---" << endl;
            cout << "---1. Mc muffin ($4.30) ---" << endl;
            cout << "---2. Hot cake ($2.00) ---" << endl;
            cout << "---3. Jugo ($1.25) ---" << endl;
            cout << "---4. salir ---" << endl;
            cin >> option;
        } while (option != 4);
            
            break;
            case 2:
            do {
            cout << "---Menu tarde---" << endl;
            cout << "---1. Big Mac ($4.35) ---" << endl;
            cout << "---2. Quesoburguesa ($2.50) ---" << endl;
            cout << "---3. Cajita feliz ($2.25) ---" << endl;
            cout << "---4. salir ---" << endl;
             cin >> option;

            } while (option != 4)
            
            break;
            case 3:
            do {
            cout << "---Menu noche---" << endl;
            cout << "---1. Wrap ($1.35) ---" << endl;
            cout << "---2. Hamburguesa clasica ($2.10) ---" << endl;
            cout << "---3. Cajita feliz ($2.25) ---" << endl;
            cout << "---4. salir ---" << endl;
            cin >> option;

            } while (option != 4)
            

            break;
            case 4:
            cout << "Muchas gracias, vuelva pronto." << endl;
            return 0;
            break;
            default:
            cout << "opcion invalida." << endl;
            break;
        }
     }

     } while (menuGlobal != 4);


     cout << "Muchas gracias, vuelva pronto." << endl;

    return 0;
}