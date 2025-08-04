#include <iostream>
using namespace std;

inline int max(int a, int b){
    return (a>b)? a:b;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a == b){
        cout << "Both numbers are equal" << endl;
    } else {
        cout << max(a, b) << " is the greater number" << endl;
    }
    return 0;
}