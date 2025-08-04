#include <iostream>
using namespace std;

inline int add (int a, int b){
    return a+b;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = add(a, b);
    cout << "Sum of " << a << " and " << b << " is " << sum << endl;
    return 0;
}