#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // without fixed, this precision accounts for total # of digits
    cout << setprecision(3) << 1.23456 << endl;
    cout << setprecision(4) << 1.23456 << endl;
    cout << setprecision(5) << 1.23456 << endl;

    cout << fixed; // with fixed, this swaps to precision after decimal point, will add 0s if needed
    cout << setprecision(3) << 1.23456 << endl;
    cout << setprecision(4) << 1.23456 << endl;
    cout << setprecision(5) << 1.23456 << endl;


    //If you do not set cout to fixed, you can use showpoint to force trailing 0s and decimal
 
    cout << setprecision(3) << showpoint << 1.23456 << endl;

    cout.unsetf(ios::fixed);   

    return 0;

}