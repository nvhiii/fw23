#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int a, b;

    cout << "Enter this sequence: 1*2345" << endl;
    cin >> a;
    cin.ignore(4, '*'); // basically what happens here is the ignore function is told to either skip 4 char or until *, and the rest of the info is taken by b
    
    cin >> b;
    cout << "a = " << a << " b = " << b << endl;

    return 0;

}