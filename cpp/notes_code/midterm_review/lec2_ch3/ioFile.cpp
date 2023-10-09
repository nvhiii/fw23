#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

    int num;
    char ch;

    ifstream input;
    ofstream output;

    input.open("input.txt");
    output.open("output.txt");

    input >> num >> ch;
    cout << num << " " << ch << endl;

    output << num << " " << ch << endl;

    input.close();
    output.close();

    return 0;

}