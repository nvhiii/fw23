#include <iostream>

using namespace std;

int main() {

    char a, b, c;

    cout << "Enter 3 char" << endl;

    cin.get(a);
    cin.putback(a);

    b = cin.peek();
    c = cin.peek();

    cout << a << " " << b << " " << c << endl;

    return 0;
}