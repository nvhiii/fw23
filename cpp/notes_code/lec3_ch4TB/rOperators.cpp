#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

const float PI = 3.1415;

using namespace std;

int main() {

    cout << PI << endl;

    cout<< "(8>6) = "  << (8>6) << endl; // returns 1
    cout<<  "(8<=6) = " << (8<=6) << endl; // returns 0
    cout<< "(8==6) = " << (8==6) << endl; // returns 0
    cout<< "(8!=6) = " << (8!=6) << endl; // returns 1

    return 0;

}