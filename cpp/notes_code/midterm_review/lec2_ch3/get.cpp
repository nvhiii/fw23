#include <iostream>

using namespace std;

int main() {

    char a, b;
    int c;

    cout << "Enter a char" << endl;
    cin.get(a);

    cout << "Enter space" << endl;
    cin.get(b);

    cout << "Enter a number" << endl;
    cin >> c; // cannot use get function on non char type

    cout << a << " " << b << " " << c << endl;

    return 0;

}