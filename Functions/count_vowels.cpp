#include <iostream>
#include <cctype>
using namespace std;

int countVowels (string str){
    int count = 0;
    for (char ch : str){
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cout << "Enter text: ";
    getline (cin, str);
    cout << "There are " << countVowels(str) << " vowels in your text." << endl;
    return 0;
}