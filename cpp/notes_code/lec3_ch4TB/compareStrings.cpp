#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

    string a = "Hello";
    string b = "World";
    string c = "Hello";
    string d = "Ball";

    cout << (a > b) << endl; // false bc mismatch
    cout << (a == c) << endl; // true bc same
    cout << (a > c) << endl; // false bc they're the same
    cout << (b > " ") << endl;

    return 0;

}