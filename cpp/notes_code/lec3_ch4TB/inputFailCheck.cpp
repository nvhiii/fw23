#include <iostream>

using namespace std;

int main() {

    int x, y;
    char a;
    cout << "Enter two ints and a char: " << endl;
    cin >> x >> y >> a;

    if (cin) {

        cout << "No input fail" << endl;
        cout << "x = " << x << " y = " << y << " ch = " << a << endl; 

    } else {

        cout<<"Input failure" << endl;
        return 1;

    }

    return 0;

}