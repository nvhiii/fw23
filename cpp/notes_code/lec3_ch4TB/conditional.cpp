#include <iostream>

using namespace std;

int main() {

    int a, b, max;

    cout << "Enter two ints to compare max val to: " << endl;
    cin >> a >> b;

    max = (a >= b) ? a : b;

    cout << max;
    return 0;

}