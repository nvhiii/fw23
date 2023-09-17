#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    char x;

    cout << "Enter a 4 letter string: " << endl;
    cin.get(x);
    cout << "After first get " << x << endl;

    cin.get(x);
    cout << "After second get " << x << endl;

    cin.putback(x);
    cout << "After 1st putback " << x << endl;

    cin.peek(); // peek fxn has no param
    cout << "After 1st peek " << x << endl;

    cin.get(x);
    cout << "After last get " << x << endl;

    return 0;

}