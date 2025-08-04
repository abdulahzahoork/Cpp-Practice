#include <iostream>
#include <cstdlib>
using namespace std;

int reverseNumber (int n){
    int digit, reverse =0;
    int sign = (n<0)? -1:1;
    n = abs(n);
    while (n>0){
        digit = n%10;
        reverse = reverse*10 + digit;
        n/=10;
    }
    return reverse*sign;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reverse of " << num << " is " << reverseNumber(num) << endl;
    return 0;
}