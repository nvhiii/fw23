#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

// header files

using namespace std;

int main() {

    // var declarations
    
    ifstream inFile;
    ofstream outFile;

    // read in data from file inData.txt (associate inFile)

    inFile.open("inData.txt");

    // write data to file outData.txt (associate outFile)

    outFile.open("outData.txt");

    string firstName, lastName, department;
    double monthlySalary, bonusPercent, taxesPercent;
    int distance, travelTime, coffeeCupsSold;
    double coffeeCupCost;

    // Read data from inFile
    inFile >> firstName >> lastName >> department;
    inFile >> monthlySalary >> bonusPercent >> taxesPercent;
    inFile >> distance >> travelTime;
    inFile >> coffeeCupsSold >> coffeeCupCost;

    // Calculate paycheck after taxes and bonus
    double paycheck = monthlySalary * (1.0 - taxesPercent / 100.0) + (monthlySalary * bonusPercent / 100.0);

    // Calculate average speed
    double averageSpeed = static_cast<double>(distance) / travelTime;

    // Calculate sales amount
    double salesAmount = coffeeCupsSold * coffeeCupCost;

    // Write formatted output to outFile
    outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
    outFile << fixed << setprecision(2);
    outFile << "Monthly Gross Salary: $" << monthlySalary << ", Monthly Bonus: " << bonusPercent << "%, Taxes: " << taxesPercent << "%" << endl;
    outFile << "Paycheck: $" << paycheck << endl << endl;
    outFile << "Distance Traveled: " << distance << " miles, Traveling Time: " << travelTime << " hours" << endl;
    outFile << "Average Speed: " << fixed << setprecision(2) << averageSpeed << " miles per hour" << endl << endl;
    outFile << "Number of Coffee Cups Sold: " << coffeeCupsSold << ", Cost: $" << coffeeCupCost << " per cup" << endl;
    outFile << "Sales Amount = $" << salesAmount << endl;

    // Close the files
    inFile.close();
    outFile.close();

    return 0;
    
}