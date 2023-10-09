#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {

    string msg;

    cout << "Please enter a message with multiple words: " << endl;
    cin >> msg;
    cout << msg << endl;

    cin.ignore(100, '\n');

    cout << "Please enter another message with multiple words: " << endl;
    getline(cin, msg);
    cout << msg << endl;

    return 0;

}