#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

    // initialized vars

    double hours = 35.45;
    double rate = 15.00;
    double tolerance = 0.01000;

    cout << "Hours = " << hours << ", Rate = " << rate << ", Tolerance = " << tolerance << endl;

    cout << scientific; // or cout.setf(ios::scientific); SCIENTIFIC IS A MANIPULATOR
    cout << "New Hours = " << hours << ", New Rate = " << rate << ", New Tolerance = " << tolerance << endl;

    cout << fixed << showpoint;
    cout << setprecision(2); // sets precision for x places to right of decimal
    cout << "New Hours = " << hours << ", New Rate = " << rate << ", New Tolerance = " << tolerance << endl;

    cout.unsetf(ios::fixed);

    return 0;

}