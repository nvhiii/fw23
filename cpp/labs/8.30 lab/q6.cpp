#include <iostream>

using namespace std;

int main() {
    int elapsedTime; // Elapsed time in seconds
    int hours, minutes, seconds;

    // Prompt the user for input
    cout << "Enter the elapsed time in seconds: ";
    cin >> elapsedTime;

    // Calculate hours, minutes, and seconds
    hours = elapsedTime / 3600; // 1 hour = 3600 seconds
    elapsedTime %= 3600; // Remaining seconds after calculating hours
    minutes = elapsedTime / 60; // 1 minute = 60 seconds
    seconds = elapsedTime % 60; // Remaining seconds after calculating minutes

    // Output the result in the format "hh:mm:ss"
    cout << "Elapsed time: " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
