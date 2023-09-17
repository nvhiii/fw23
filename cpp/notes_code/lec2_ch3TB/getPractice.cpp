#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int age;
    char fName, lName;
    string fullName;

    cout << "Please enter your initials: " << endl;
    cin.get(fName); // .get fxn only works with char type
    cin.get(lName); // don't use space when entering using get fxn

    cout << "Now enter your age and name: " << endl;
    cin >> age >> fullName;

    cout << "Initials: " << fName << ", " << lName << "| Age: " << age << " | Full Name: " << fullName << endl;

    return 0;

}