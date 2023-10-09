#include <iostream>
#include <cmath>

using namespace std;

int bigger(int, int);

int main() {

    int a, b;

    cout << "Please enter 2 integer values." << endl;
    cin >> a >> b;

    if (cin) {

        cout << "The bigger number of the two ints you entered is: " << bigger(a,b) << endl;

    } else {

        cin.clear();
        cout << "Invalid input. Please rerun program." << endl;

    }

    return 0;
}

int bigger(int var1, int var2) {

    if (var1 > var2) {

        return var1;

    } else {

        return var2;

    }

}