#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    if (n<=0){
        cout << "No integers to process." << endl;
        return 0;
    }

    int sum =0;
    vector<int> num(n);
    cout << "Enter " << n << " integers: ";
    for (int &x : num){
        cin >> x;
        sum += x;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}