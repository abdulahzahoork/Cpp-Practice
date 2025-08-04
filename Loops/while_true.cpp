#include <iostream>
using namespace std;

int main()
{
    int num;

    while (true){
        cout << "\nEnter a number: ";
        cin >> num;

        if (num < 0){
            break;
        }
        cout << "You entered: " << num;
    }
    cout << "Negative number entered. Loop ended!";
    return 0;
}