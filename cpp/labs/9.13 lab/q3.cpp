#include <iostream>

using namespace std;

int main() {

    char x;
    float bodyWeight, wrist, waist, hip, forearm, a1, a2, a3, a4, a5, bf, bfp, b;

    cout << "Please enter your gender (m/f): " << endl;
    cin >> x;

    if (x == 'f') {

        cout << "Please enter your body weight, " << endl
             << "wrist measurement (at fullest point), " << endl
             << "waist measurement (at navel), " << endl
             << "hip measurement (at fullest point), " << endl
             << "and forearm measurement (at fullest point): ";

        cin >> bodyWeight >> wrist >> waist >> hip >> forearm;

        a1 = (bodyWeight * 0.732) + 8.987;
        a2 = wrist/3.140;
        a3 = waist*0.157;
        a4 = hip*-.249;
        a5 = forearm*0.434;

        b = a1 + a2 - a3 - a4 + a5;
        bf = bodyWeight - b;

        bfp = bf * 100 / bodyWeight;

        cout << "Your bfp is: " << bfp << endl;

    } else if (x == 'm') {

        cout << "Please enter your body weight " << endl
             << "and wrist measurement: " << endl;

        cin >> bodyWeight >> wrist;

        a1 = (bodyWeight * 1.082) + 94.42;
        a2 = wrist * 4.15;

        b = a1 - a2;
        bf = bodyWeight - b;
        bfp = bf * 100 / bodyWeight;

        cout << "Your bfp is: " << bfp << endl;

    } else {

        cout << "Invalid input. Please check capitalization or entry (m/f)." << endl;

    }

    return 0;

}