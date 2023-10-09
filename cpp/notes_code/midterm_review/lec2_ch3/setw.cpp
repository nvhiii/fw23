#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main() {

    int miles = 245;
    int speed = 55;
    double hours = 34.45;
    double error = 3.7564;

    cout << fixed << showpoint;
    cout << "123456789012345678901234567890" << endl;

    cout << setw(5) << left << miles << endl;

    return 0;

}