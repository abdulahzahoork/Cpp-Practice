#include <iostream>
using namespace std;

bool palindrome (int n){
    int digit, reverse =0;
    int a=n;
    while (a>0){
        digit = a%10;
        reverse = reverse*10 + digit;
        a/=10;
    }
    return (reverse == n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << " is " << (palindrome(num)? "palindrome":"not palindrome") << endl;
    return 0;
}
