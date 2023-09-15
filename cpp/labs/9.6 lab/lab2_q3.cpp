#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double weightInKilograms, weightInPounds;

    // Prompt the user to enter the weight in kilograms
    cout << "Enter the weight in kilograms: ";
    cin >> weightInKilograms;

    // Convert kilograms to pounds
    weightInPounds = weightInKilograms * 2.2;

    // Display the equivalent weight in pounds with two decimal places
    cout << fixed << setprecision(2);
    cout << "Equivalent weight in pounds: " << weightInPounds << " pounds" << endl;

    return 0;
}
