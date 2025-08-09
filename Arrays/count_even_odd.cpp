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

    vector<int> num(n);
    int evenCount = 0, oddCount = 0;
    cout << "Enter " << n << " integers: "; 
    for (int &x : num){
        cin >> x;
        if (x%2 == 0) evenCount++;
        else oddCount++;
    }
    
    cout << "There are " << evenCount << " even numbers and " << oddCount << " odd numbers." << endl;
    return 0;
}