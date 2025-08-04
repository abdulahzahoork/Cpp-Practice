#include <iostream>
using namespace std;

int main()
{
    string color;
    cout << "Enter color: ";
    cin >> color;

    if (color == "red"){
        cout << "Stop" << endl;
    }
    else if (color == "yellow"){
        cout << "Slow down" << endl;
    }
    else if (color == "green"){
        cout << "Go" << endl;
    }
    else
        cout << "Error: Invalid Input" << endl;

    return 0;
}