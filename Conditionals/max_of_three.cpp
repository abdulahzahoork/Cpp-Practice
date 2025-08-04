#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if (a>b && a>c) {
        cout << "A is greater than B and C" << endl;
    }
    else if (b>a && b>c){
        cout << "B is greater than A and C" << endl;
    }
    else 
        cout << "C is greater than A and B" << endl;

    return 0;
}