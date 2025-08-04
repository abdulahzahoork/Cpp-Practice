#include <iostream>
using namespace std;

int main()
{
    int i, o, num;

    cout << "Enter a number: ";
    cin >> num;
    
    for (i=1; i<=num; i++){
        for (o=1; o<=num; o++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}