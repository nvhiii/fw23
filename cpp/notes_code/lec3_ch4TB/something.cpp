#include <iostream>
#include <iomanip>

using namespace std;

// Function to check if the input is a valid 5-digit integer
bool isValidNumber(int number) {
    return number >= 10000 && number <= 99999;
}

int main() {
    int number;

    cout << "Enter a 5-digit integer: ";
    cin >> number;

    if (isValidNumber(number)) {
        int digits[5];

        for (int i = 4; i >= 0; i--) {
            int digit = number % 10;
            if (digit == 9) {
                digits[i] = 0;
            } else {
                digits[i] = digit + 1;
            }
            number /= 10;
        }

        int result = 0;
        for (int digit : digits) {
            result = result * 10 + digit;
        }

        cout << "New number after incrementing digits: " << setw(5) << setfill('0') << result << endl;
    } else {
        cout << "Invalid input. Please enter a 5-digit integer." << endl;
    }

    return 0;
}
