#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()  {

    ifstream input;

    input.open("fakeFile.txt");

    if (!input) {

        cout << "The input file could not be located." << endl;
        return 1;

    }

    return 0;
}