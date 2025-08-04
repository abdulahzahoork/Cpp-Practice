#include <iostream>
using namespace std;

inline void checkeven(int n){
    if (n%2==0){
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkeven(num);
    return 0;
}