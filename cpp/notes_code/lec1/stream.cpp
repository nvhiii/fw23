#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    string name, nationality;
    int a, b, bmiEstimate;

    cout << "Please enter your Name, Nationality, Age, and Weight" << endl;

    cin >> name >> nationality >> a >> b; // don't use endl on a input

    bmiEstimate = a * b;

    cout << "Welcome, " << name << "! Your estimated BMI is: " << bmiEstimate << endl;


    return 0;

}