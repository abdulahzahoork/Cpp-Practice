#include <iostream>
using namespace std;

int main(){
    int num, sum = 0, i;

    cout << "Enter a number: ";
    cin >> num;

    for (i=0; i<=num; i++){
        sum = sum + i;
    }
    cout << "Sum: " << sum;
    return 0;
}