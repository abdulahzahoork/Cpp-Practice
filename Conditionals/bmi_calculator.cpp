#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float weight;
    float height;
    float bmi;

    cout << "Enter your weight in KG: ";
    cin >> weight;

    cout << "Enter your height in metres: ";
    cin >> height;

    bmi = weight / pow(height, 2);
    cout << "Your BMI is: " << bmi << endl;

    if (bmi<18.5){
        cout << "Underweight" << endl;
    }
    else if (bmi <= 24.9){
        cout << "Normal" << endl;
    }
    else if (bmi <= 29.9){ 
        cout << "Overweight" << endl;
    }
    else 
        cout << "Obese" << endl;

    return 0;
}