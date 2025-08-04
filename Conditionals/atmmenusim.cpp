#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "1: Check Balance \n2: Withdraw \n3: Deposit \n4: Exit \nEnter: ";
    cin >> num;

    switch (num){
        case 1: 
            cout << "Checking Balance" << endl;
            break;
        case 2: 
            cout << "Withdraw" << endl;
            break;
        case 3: 
            cout << "Deposit" << endl;
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Error: Invalid Input" << endl;
    }
}