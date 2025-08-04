#include <iostream>
using namespace std;

int power (int base, int exp){
    int result = 1;
    for (int i=1; i<=exp; i++){
        result *= base;
    }
    return result;
}

int main(){
    int base, exp;
    cout << "Enter a number and it's power: ";
    cin >> base >> exp;
    cout << base << " raised to power " << exp << " is " << power(base, exp) << endl;
    return 0;
}