#include <iostream>
#include <iomanip>
#include <fstream> // include filestream
#include <cmath>
#include <string>

using namespace std;

int main() {

    string fName, lName;
    char f, l;
    unsigned int salary, ID;

    // first declare the file input output var

    ifstream input; // input-file stream
    ofstream output; // output-file stream

    input.open("input.txt"); // open coressponding files using open fxn
    output.open("output.txt");

    input >> fName >> lName >> salary >> ID;

    f = fName[0];
    l = lName[0];

    output << "The individual's name is: " << fName << ", " << lName
           << "\n Their initials are: " << f << ", " << l 
           << "\n Salary: $" << salary << setprecision(2) 
           << "\n Their employee ID: " << ID << endl;

    input.close();
    output.close();

    return 0;

}