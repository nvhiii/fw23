#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string msg;

    cout << "Please enter a valid string" << endl;
    cin >> msg;
    cout << msg << endl;

    cin.ignore(100, '\n');
    cout << "Please enter another string" << endl;
    getline(cin, msg); // getline method is independent and has 2 param, input stream var + string var to read
    cout << msg << endl;

    return 0;

}