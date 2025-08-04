#include <iostream>
using namespace std;

int main()
{
    int i, n, m;

    cout << "Enter a number: ";
    cin >> i;

    for (n=1; n<=10; n++){
        cout << i << " x " << n << " = " << i*n << endl;
    }
    return 0;
}