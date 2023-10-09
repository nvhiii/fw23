#include <iostream>

using namespace std;

int main() {

    int x, y;
    char z;
    
    cout << "Enter 4.5" << endl;
    cin >> x >> y >> z;

    if(cin) {

        cout << "No input fail" << endl;
        cout << "x = " << x << " y = " << y << " z = " << z << endl;

    } else {

        cout << "Input failure." << endl;
        return 1;

    }

    return 0;
}