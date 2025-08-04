#include <iostream>
using namespace std;

int main()
{
    int i, o, num;

    cout << "Enter a number: ";
    cin >> num;

    for (o=1; o<=num; o++){
        for (i=1; i<=o; i++){
            cout << "* ";
        }
        cout << endl;
    }
}