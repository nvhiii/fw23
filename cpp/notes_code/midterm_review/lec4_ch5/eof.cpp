#include <iostream>

using namespace std;

int main() {

    int i;

    cout << "Enter a number" << endl;
    cin >> i;

    while (cin) {

        cout << i << endl;
        cin >> i;

    }

    return 0;
}