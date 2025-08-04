#include <iostream>
using namespace std;

int main() {
    int guess;

    cout << "Guess the number: ";
    cin >> guess;

    while (guess != 5) {
        cout << "Wrong! Try again: ";
        cin >> guess;
    }

    cout << "Correct! You guessed the number." << endl;

    return 0;
}