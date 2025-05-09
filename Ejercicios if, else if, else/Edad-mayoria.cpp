#include <iostream>

using namespace std;

int main(){
    int age;
    cout <<"please insert your age";
    cin >> age;
    if (age < 18) {
        cout<<" you're still a minor";
    } else (age >= 18) {
        cout <<" you're legally an adult";
    }

    return 0;


}
   