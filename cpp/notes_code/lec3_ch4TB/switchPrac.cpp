#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    unsigned int age;

    cout << "Please enter your age: " << endl;
    cin >> age;

    switch (age>21) {

        case 1:
            cout << "Old enough to drink" << endl;
            break;
        case 0:
            cout << "Too young to drink" << endl;
            break;

    }

    return 0;

}