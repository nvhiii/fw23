#include <iostream>

using namespace std;

int main() {
    double fuelCapacity; // Capacity of the fuel tank in gallons
    double milesPerGallon; // Miles per gallon the automobile can be driven
    double milesDriven; // Number of miles the automobile can be driven

    // Prompt the user for input
    cout << "Enter the fuel tank capacity (in gallons): ";
    cin >> fuelCapacity;

    cout << "Enter the miles per gallon (MPG): ";
    cin >> milesPerGallon;

    // Calculate the number of miles that can be driven
    milesDriven = fuelCapacity * milesPerGallon;

    // Output the result
    cout << "The automobile can be driven for " << milesDriven << " miles without refueling." << endl;

    return 0;
}
