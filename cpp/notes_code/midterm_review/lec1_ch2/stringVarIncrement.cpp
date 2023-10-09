#include <iostream> // preprocessor directive

using namespace std;

int main() {

    int a, b, c;
    string name;

    a = 1;
    b = 2;
    c = 3;

    cout << a++ << endl; // a prints, becomes 2
    cout << b++ << endl; // b prints, becomes 3
    cout << c++ << endl; // c prints, become 4

    cout << ++a << endl; // increments to 3, prints
    cout << ++b << endl; // increments to 4, prints
    cout << ++c << endl; // increments to 5, prints

    return 0;

}