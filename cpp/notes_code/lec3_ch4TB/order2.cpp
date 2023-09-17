#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Please enter a integer: " << endl;
    cin >> num;

    if (num >= 0 && num <= 10)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;

}