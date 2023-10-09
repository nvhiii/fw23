#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

    float a;

    a = 1.23456;

    cout << fixed;

    if (a>0) {

        cout << setprecision(static_cast<int>(a)) << a << endl;

    }

    cout.unsetf(ios::fixed);

    return 0;
}