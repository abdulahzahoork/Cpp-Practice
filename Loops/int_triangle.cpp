#include<iostream>
using namespace std;

int main(){

    int i, o;

    for (o=1; o<=4; o++){
        for (i=1; i<=o; i++){
            cout << i<< " ";
        }
        cout << endl;
    }

    return 0;
}