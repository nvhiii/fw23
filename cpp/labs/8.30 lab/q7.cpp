#include <iostream>
#include <cmath> // Include the cmath library for rounding

using namespace std;

int main() {
    const double litersPerCarton = 3.78; // Liters of milk per carton
    const double costPerLiter = 0.38;   // Cost per liter
    const double profitPerCarton = 0.27; // Profit per carton

    double totalMilkProduced;
    int cartonsNeeded;
    double costOfProduction;
    double totalProfit;

    cout << "Enter the total amount of milk produced in liters: ";
    cin >> totalMilkProduced;

    // Calculate the number of milk cartons needed (rounded to the nearest integer)
    cartonsNeeded = round(totalMilkProduced / litersPerCarton);

    // Calculate the cost of producing milk
    costOfProduction = totalMilkProduced * costPerLiter;

    // Calculate the profit for producing milk
    totalProfit = cartonsNeeded * profitPerCarton;

    // Output the results
    cout << "Number of milk cartons needed: " << cartonsNeeded << endl;
    cout << "Cost of producing milk: $" << costOfProduction << endl;
    cout << "Profit for producing milk: $" << totalProfit << endl;

    return 0;
}
