#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int a, b;
    char x;

    cout << "Please enter two int followed by a char: " << endl;
    cin >> a >> b >> x;

    if (a == b) {

        cout << "The numbers " << a << " and " << b << " are the same!" << endl;

    } else if (a > b) {

        cout << "The number " << a << " is larger than " << b << endl;

    } else if (b > a) {

        cout << "The number " << b << " is larger than " << a << endl;

    } else {

        if (static_cast<int>(x) == a || static_cast<int>(x) == b)
            cout << "Your char is the same as one of the ints entered" << endl;
        else
            cout << "Bad char entered." << endl;

    }

    return 0;

}