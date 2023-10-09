#include <iostream>

using namespace std;

int bigger(int num1, int num2);

int main() {

    int a = 3, b = 5;
    
    cout << bigger(a, b) << endl;

    int bigNum = bigger(10, a);

    cout << bigNum << endl;

    return 0;
}

int bigger(int num1, int num2) {

    if (num1 > num2) {

        return num1;

    } else {

        return num2;

    }

}