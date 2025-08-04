#include<iostream>
using namespace std;
int main(){
    string str;
    int count =0;
    cout << "Enter a string: ";
    getline (cin, str);
    for (int i=0; i<str.length(); i++){
        char ch = str[i];
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}