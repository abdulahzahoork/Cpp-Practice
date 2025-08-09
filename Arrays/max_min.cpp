#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n<=0){
        cout << "No elements to process." << endl;
        return 0;
    }

    vector<int> num(n);
    cout << "Enter " << n << " elements: ";
    for (int &x : num){
        cin >> x;
    }

    int maxVal = num[0];
    int minVal = num[0];
    for (int val : num){
        if (maxVal < val) maxVal = val;
        if (minVal > val) minVal = val;
    }
    cout << "Maximum number: " << maxVal << endl;
    cout << "Minimum number: " << minVal << endl;
    return 0;
}