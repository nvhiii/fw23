#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double num;

    cout << fixed;

    cout << "Enter 12345: " << endl;
    cin >> num;

    if (num > 0) {

        cout << setprecision(static_cast<int>(num)) << num;

    }

    cout.unsetf(ios::fixed);

    return 0;

}