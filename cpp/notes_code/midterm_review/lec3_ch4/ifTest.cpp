#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a;

    cout << "Please enter a valid int" << endl;
    cin >> a;

    if (a%2==0) {

        cout << "Congratulations, your number is even!" << endl;

    } else {

        cout << "Your number is odd!" << endl;

    }

    return 0;

}