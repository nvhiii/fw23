#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int a, b, c;
    bool age;

    age = (a>=21);

    cout << "Please enter 3 valid ints." << endl;
    cin >> a >> b >> c;

    age = (a>=21);

    if (age) {

        cout << "Legal" << endl;

    } else if (b==a) {

        cout << "a is equal to b" << endl;

    } else {

        cout << c << endl;

    }

    return 0;
}