#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cout << "please enter the sequence 1 2 3 4 * 5:" << endl;

    cin >> a;
    cin.ignore(5, '*'); // ignores next 5 input char, including whitespaces
    cin >> b; // hence b = 4, if asterik detected before, then output is 0

    cout << "a = " << a << " b = " << b << endl;

    return 0;

}