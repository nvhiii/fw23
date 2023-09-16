#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    char a, b;

    cout << "Please enter a few random characters: " << endl;

    cin.get(a);
    cin.putback(a); // needs a function param

    cout << "This is the result of the first get and putback: " << a << endl;

    b = cin.peek();

    cout << "This is the result of the peek: " << b << endl;

    cin.clear();
    cin.ignore(100, '\n');

    cin.get(b);

    cout << "This is the result of the final get: " << b << endl;

    return 0;

}