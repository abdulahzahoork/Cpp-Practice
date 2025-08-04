#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90 && marks<=100){
        cout << "A+" << endl;
    }
    else if (marks >= 80){
        cout << "A" << endl;
    }
    else if (marks >= 70){
        cout << "B" << endl;
    }
    else if (marks >= 60){
        cout << "C" << endl;
    }
    else
        cout << "F" << endl;
    
    return 0;
}