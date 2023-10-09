#include <iostream>

using namespace std;

int test();

int main() {

    cout << test() << endl;
    cout << test() << endl;

    return 0;
}

int test() {

    return 1, 2, 3, 4; // only 4 is returned, bc c++ returns only last value

}