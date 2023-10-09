#include <iostream>

int smallest(int, int);

using namespace std;

int main() {

    int inputNum, min, count;

    cout << "Please enter 10 numbers:" << endl;
    cin >> inputNum;
    min = inputNum;

    for (count = 0; count < 10; count++) {

        cin >> inputNum;
        min = smallest(min, inputNum);

    }

    cout << "The smallest number in that set is: " << min << endl;

    return 0;
}

int smallest(int a, int b) {

    if (a < b) {

        return a;

    } else {

        return b;

    }

}