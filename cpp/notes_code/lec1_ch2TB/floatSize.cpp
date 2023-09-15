#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int x, y;
    float a;
    char b;
    long c; // long long = 8 bytes, long = 4 bytes

    x = 3;
    a = 3.14;
    b = 'A';
    c = 1234567;

    cout << sizeof(a) << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;


    return 0;

}