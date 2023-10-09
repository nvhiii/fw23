#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << setprecision(3) << 1.23456 << endl;

    cout << fixed;
    cout << setprecision(3) << 1.23456 << endl;

    cout.unsetf(ios::fixed);

    cout << setprecision(3) << showpoint << 1.23456 << endl;

    return 0;

}