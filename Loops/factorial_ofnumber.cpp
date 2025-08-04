#include <iostream>
using namespace std;

int main()
{
    int num, i;
    int fact =1;

    cout << "Enter a number: ";
    cin >> num;

    for (i=1; i<=num; i++){
        fact *= i;
    }
    cout << "Factorial is: " << fact;

    return 0;
}