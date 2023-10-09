#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b, c;

    cout << "Please enter 3 integer values." << endl;
    cin >> a >> b >> c;

    if (a>0 && b>0 && c>0)
        cout << "All values are positive." << endl;

    cout << "Execution continues." << endl;

    return 0;
}