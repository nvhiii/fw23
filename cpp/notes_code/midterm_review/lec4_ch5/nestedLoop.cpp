#include <iostream>

using namespace std;

int main() {

    int j;

    for (int i=0; i<10; i++) {

        for (j=0; j<=i; j++) {

            cout << "*";

        }
        cout << endl;

    }

    return 0;
}