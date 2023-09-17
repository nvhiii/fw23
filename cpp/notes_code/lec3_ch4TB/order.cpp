#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Enter a num: " << endl;
    cin >> num;

    if (0 <= num <= 10) // this is bad bc it checks from left to right
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;

}