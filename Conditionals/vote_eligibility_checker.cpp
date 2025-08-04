#include <iostream>
using namespace std;

int main()
{
    int age;
    string nationality;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a Pakistani? ";
    cin >> nationality;

    if (age >= 18 && nationality == "yes"){
        cout << "You are eligible to vote" << endl;
    }
    else
        cout << "You are not eligible to vote" << endl;

    return 0;
}