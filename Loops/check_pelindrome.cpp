#include<iostream>
using namespace std;

int main(){
    int n, num, reversed =0, digit;

    cout << "Enter a number: ";
    cin >> n; 

    num = n;

    while (num!=0){
        digit = num%10;
        reversed = reversed *10 + digit;
        num /= 10;
    }
    cout << reversed << endl;
    if (n == reversed){
        cout << "It is a palindrome number";
    }
    else
        cout << "It is not a plindrome number";

    return 0;
}