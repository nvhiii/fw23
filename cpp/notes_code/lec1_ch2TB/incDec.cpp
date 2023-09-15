#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int a, b, c;

    a = 3;
    b = ++a; // increments first, then displays result (4)
    c = a++; // increments second, so displays first (4), but value is now 5

    cout << a << " " << b << " " << c << " " << a-- << " " << b++ << " " << ++c << endl;

    return 0;

}