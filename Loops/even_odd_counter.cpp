#include <iostream>
using namespace std;

int main()
{
    //Ask the user how many numbers they want to input. Then take those numbers and count how many are even and how many are odd.

    int n, num, even_count=0, odd_count=0;

    cout << "How many numbers do you want to enter?" << endl;
    cin >> n;

    for (int i=0; i<n; i++){
        cout << "Enter number " << i+1 << " : ";
        cin >> num;

        if (num%2==0){
            even_count+=1;
        }
        else
            odd_count +=1;
    }

    cout << "Even count: " << even_count << endl;
    cout << "Odd count: " << odd_count << endl;

    return 0;
}