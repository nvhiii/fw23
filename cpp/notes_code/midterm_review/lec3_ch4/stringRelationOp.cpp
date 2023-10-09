#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

    /*
        For string comparison, the string compares based solely on matching char
    */

    string a, b, c;
    int lengthA, lengthB, lengthC;

    cout << "Please enter 3 strings" << endl;
    cin >> a >> b >> c;

    lengthA = a.length();
    lengthB = b.length();
    lengthC = c.length();

    if (lengthA == lengthB && lengthB == lengthC) {

        cout << "All strings are the same length";

    } else if ((lengthA > lengthB && lengthA > lengthC && lengthC < lengthB) || (lengthA > lengthB && lengthA > lengthC && lengthB < lengthC)) {

        cout << "String a is the longest string" << endl;

    } else if ((lengthB > lengthA && lengthB > lengthC && lengthA > lengthC) || (lengthB > lengthA && lengthB > lengthC && lengthA < lengthC)) {

        cout << "String b is the longest string" << endl;

    } else {

        cout << "String c is the longest string" << endl;

    }

    return 0;
}