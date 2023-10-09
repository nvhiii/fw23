#include <iostream>
using namespace std;

// Enumeration for the objects
enum objectType { ROCK, PAPER, SCISSORS };

// Function to display the rules
void displayRules() {
    cout << "Welcome to the game of Rock, Paper, and Scissors." << endl;
    cout << "This is a game for two players. For each game, each player selects one of the objects: Rock, Paper, or Scissors." << endl;
    cout << "The rules for winning the game are:" << endl;
    cout << "1. If both players select the same object, it's a tie." << endl;
    cout << "2. Rock breaks Scissors: So the player who selects Rock wins." << endl;
    cout << "3. Paper covers Rock: So the player who selects Paper wins." << endl;
    cout << "4. Scissors cut Paper: So the player who selects Scissors wins." << endl;
    cout << "Enter R or r for Rock, P or p for Paper, and S or s for Scissors." << endl << endl;
}

// Function to check if the selection is valid
bool validSelection(char choice) {
    return (choice == 'R' || choice == 'r' || choice == 'P' || choice == 'p' || choice == 'S' || choice == 's');
}

// Function to convert user input to an Object
objectType retrievePlay(char choice) {
    switch (choice) {
        case 'R':
        case 'r':
            return ROCK;
        case 'P':
        case 'p':
            return PAPER;
        case 'S':
        case 's':
            return SCISSORS;
        default:
            return ROCK; // Default to Rock in case of invalid input
    }
}

// Function to determine the winning object
objectType winningObject(objectType player1Choice, objectType player2Choice) {
    if ((player1Choice == ROCK && player2Choice == SCISSORS) ||
        (player1Choice == PAPER && player2Choice == ROCK) ||
        (player1Choice == SCISSORS && player2Choice == PAPER)) {
        return player1Choice;
    } else if ((player2Choice == ROCK && player1Choice == SCISSORS) ||
               (player2Choice == PAPER && player1Choice == ROCK) ||
               (player2Choice == SCISSORS && player1Choice == PAPER)) {
        return player2Choice;
    } else {
        return ROCK; // If both choices are the same, return Rock (tie)
    }
}

// Function to display the game result
void gameResult(objectType player1Choice, objectType player2Choice, int& player1Wins, int& player2Wins) {
    cout << "Player 1 chose ";
    switch (player1Choice) {
        case ROCK:
            cout << "Rock";
            break;
        case PAPER:
            cout << "Paper";
            break;
        case SCISSORS:
            cout << "Scissors";
            break;
    }
    cout << " and Player 2 chose ";
    switch (player2Choice) {
        case ROCK:
            cout << "Rock";
            break;
        case PAPER:
            cout << "Paper";
            break;
        case SCISSORS:
            cout << "Scissors";
            break;
    }
    cout << ". ";

    objectType winner = winningObject(player1Choice, player2Choice);
    if (winner == player1Choice) {
        cout << "Player 1 wins!" << endl;
        player1Wins++;
    } else if (winner == player2Choice) {
        cout << "Player 2 wins!" << endl;
        player2Wins++;
    } else {
        cout << "It's a tie!" << endl;
    }
}

int main() {
    displayRules();

    char playAgain;
    int totalGames = 0;
    int player1Wins = 0;
    int player2Wins = 0;

    do {
        totalGames++;

        cout << "Game " << totalGames << ":" << endl;

        char player1Choice, player2Choice;

        // Get player 1's choice
        do {
            cout << "Player 1, enter your choice (R/P/S): ";
            cin >> player1Choice;
        } while (!validSelection(player1Choice));

        // Get player 2's choice
        do {
            cout << "Player 2, enter your choice (R/P/S): ";
            cin >> player2Choice;
        } while (!validSelection(player2Choice));

        objectType player1Object = retrievePlay(player1Choice);
        objectType player2Object = retrievePlay(player2Choice);

        gameResult(player1Object, player2Object, player1Wins, player2Wins);

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Game over. Total games played: " << totalGames << endl;
    cout << "Player 1 wins: " << player1Wins << " times" << endl;
    cout << "Player 2 wins: " << player2Wins << " times" << endl;

    return 0;
}
