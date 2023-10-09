#include <iostream>

using namespace std;

int main() {

    char a, b;
    int c;

    cout << "Please enter 2 and 25" << endl;

    cin >> a >> b >> c; // char a = 2, char b = 2, int c = 5

    cout << "The output is " << a << " " << b << " " << c << endl;

    // input failure, stream used is ignored, but stored values are used

    cin.clear();

    return 0;
}