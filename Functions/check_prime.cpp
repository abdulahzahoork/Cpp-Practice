#include <iostream>
using namespace std;

bool checkprime (int n){
    if (n<=1){
        return false;
    }
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number is " << (checkprime(num)? "prime":"not prime") << endl;
    return 0;
}