#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cout << "Please enter 2 values." << endl;
    cin >> a >> b;

    c = (a>=b) ? a : b;

    cout << c << endl;

    return 0;
}