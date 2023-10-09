#include <iostream>

using namespace std;

int main() {

    for (int i=0; i<10; i++) {

        if (i==5)
            continue;

        cout << i << endl;

    }

    int x = 0;

    while (x < 10) {

        if (x==5) {
            x++;
            continue;
        }
        cout << x++ << endl;

    }

    return 0;
}