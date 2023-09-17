#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int x;
    cout << "Enter any int: " << endl;
    cin >> x;

    if (x%2 == 1)
        cout << "Hello" << endl;
    else
        cout << "World" << endl;

    return 0;

}