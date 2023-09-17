#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int x;
    cout << "Enter an int: " << endl;
    cin >> x;

    if (x%2==1)
        cout << "Hello" << endl;
        cout << "World" << endl; // this stmnt will be executed no matter what bc no paren

    return 0;

}