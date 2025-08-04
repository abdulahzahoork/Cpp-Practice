#include <iostream>
using namespace std;

float calculate (int a, int b, char op){
    float result;
    switch (op){
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            if (b==0){
                cout << "Error! Division by zero." << endl;
                return 0.0;
            }
            result = a/b;
            break;
        default:
            cout << "Error! Invalid Input" << endl;
            result = 0.0;
    }
    return result;
}

int main(){
    int num_1, num_2;
    char op;
    cout << "Enter equation: ";
    cin >> num_1 >> op >> num_2;
    cout << "Result: " << calculate(num_1, num_2, op) << endl;
    return 0;
}