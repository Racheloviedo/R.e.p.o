#include <iostream>
using namespace std;

int main(){
    string m = " ";
    char month;
    

    cout << "Please, insert your birth month" << endl;
    cin >> m; 

    if (m == "january"){
        month = 'J';
    } else if (m == "february"){
        month = 'F';
    } else if (m == "march"){
        month = 'R';
    } else if (m == "april"){
        month = 'A';
    } else if (m == "may"){
        month = 'M';
    } else if (m == "june"){
        month = 'E';
    } else if (m == "july"){
        month = 'Y';
    } else if (m == "august"){
        month = 'U';
    } else if (m == "september"){
        month = 'S';
    } else if (m == "october"){
        month = 'O';
    } else if (m == "november"){
        month = 'N';
    } else if (m == "december"){
        month = 'D';
    }

    switch (month){
    case 'J': 
        cout << " your zodiac sign is Aquarius." << endl;
        break;
    case 'F':
        cout << " your zodiac sign is Piscis." << endl;
        break;
    case 'R':
        cout << " your zodiac sign is Aries." << endl;
        break;
    case 'A': 
        cout << "your zodiac sign is Taurus." << endl;
        break;
    case 'M':
        cout << "your zodiac sign is Gemini." << endl;
        break;
    case 'E':
        cout << " your zodiac sign is Cancer." << endl;
        break;
    case 'Y':
        cout << "your zodiac sign is Leo." << endl;
        break;
    case 'U':
        cout << "your zodiac sign is Virgo." << endl;
        break;
    case 'S':
        cout << "your zodiac sign is Libra." << endl;
        break;
    case 'O':
        cout << " your zodiac sign is Scorpio." << endl;
        break;
    case 'N':
        cout << "your zodiac sign is Sagittarius." << endl;
        break;
    case 'D':
        cout << "your zodiac sign is Capricorn." << endl;
        break;
    default:  
        cout << " invalid option." << endl;
        break;

    }
    
    return 0;

    
}