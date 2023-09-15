#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int a, b;

    cout << "Enter this sequence: 1 2 3 4 5" << endl;
    cin >> a;
    cin.ignore(4, '*');
    
    cin >> b;
    cout << "a = " << a << " b = " << b << endl;

    return 0;

}