#include <iostream>
#include <string>

using namespace std;

// main method approach

int main() {
    string player1, player2;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;

    while (true) {
        cout << "Player 1, enter your choice (rock, paper, or scissors): ";
        cin >> player1;

        cout << "Player 2, enter your choice (rock, paper, or scissors): ";
        cin >> player2;

        if (player1 == player2) {
            cout << "It's a tie!" << endl;
        } else if ((player1 == "rock" && player2 == "scissors") ||
                   (player1 == "scissors" && player2 == "paper") ||
                   (player1 == "paper" && player2 == "rock")) {
            cout << "Player 1 wins!" << endl;
        } else {
            cout << "Player 2 wins!" << endl;
        }

        cout << "Do you want to play again? (yes/no): ";
        string playAgain;
        cin >> playAgain;

        if (playAgain != "yes") {
            break;
        }
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
