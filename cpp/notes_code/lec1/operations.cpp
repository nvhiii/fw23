#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int x, y;
    float a;

    x = 4;
    y = 5;
    a = 10.0;

    cout << x * y << endl; // expect 20
    cout << y / x << endl; // expect 1, since this is just truncated division
    cout << x + y << endl; // expect 9
    cout << x - y << endl; // expect -1
    cout << x % y << endl; // expect 4
    cout << a / x << endl; // expect 2.5

    return 0;

}