#include <iostream>
using namespace std;

int sumDigits (int n){
    int sum=0;
    while (n>0){
        int digit = n%10;
        sum += digit;
        n/=10;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits of " << num << " is " << sumDigits(num) << endl;
    return 0;
}