#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number (0 to stop): ";
    cin >> number;

    while (number != 0) {
        cout << "You entered: " << number << endl;
        cout << "Enter a number (0 to stop): ";
        cin >> number;
    }

    cout << "Program ended" << endl;

    return 0;
}