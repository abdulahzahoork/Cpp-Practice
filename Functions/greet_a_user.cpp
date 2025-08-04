#include <iostream>
using namespace std;

inline void greet (string name){
    if (name.empty()){
        cout << "You didn't enter your name." << endl;
    }else {
        cout << "Hello! " << name << endl;
    }
}

int main(){
    string str;
    cout << "Enter your name: ";
    getline(cin, str);
    greet(str);
    return 0;
}