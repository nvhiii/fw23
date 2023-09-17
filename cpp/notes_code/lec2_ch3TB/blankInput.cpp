#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    char fInitial, lInitial;
    int age;

    cout << "Enter your initials and age in this format: A G 24" << endl;
    cin >> fInitial >> lInitial >> age;

    cout << "The output: " << fInitial << ", " << lInitial << ", and " << age << endl;

    return 0;

    // if an input is expected, yet is omitted, then the compiler will keep running, expecting another input

}