#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream input;

    int id, num;
    string name;

    input.open("input.txt");

    while (input && !input.eof()) {

        input >> id >> name >> num;
        cout << id << " " << name << " " << num << endl;

    }

    return 0;
}