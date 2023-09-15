#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double decimalNumber;
    int roundedNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Round the decimal number to the nearest integer
    roundedNumber = round(decimalNumber);

    // Output the rounded number
    cout << "Rounded to the nearest integer: " << roundedNumber << endl;

    return 0;
}
