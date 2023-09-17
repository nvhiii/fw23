#include <iostream>

using namespace std;

int main() {

    int a;
    char ch;

    cout << "Please input an integer between 0 and 35: " << endl;
    cin >> a;

    if (a <= 9 && a >= 0) {

        cout << a;

    } else if (a >= 10 && a <= 35) {

        ch = static_cast<char>(a+55); // ascii representation
        cout << ch;

    }

    return 0;

}