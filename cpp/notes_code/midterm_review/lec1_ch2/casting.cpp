#include <iostream>

using namespace std;

int main() {

    cout << static_cast<int>(16/3) << endl;
    cout << static_cast<double>(15/2) << endl; // division done first, 7 as double is still 7
    cout << static_cast<double>(15)/2 << endl; // this returns 7.5 bc 15 is cast to double

    cout << static_cast<int>(7.8 + static_cast<double>(15)/2) << endl; // returns 15

}