//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//
// Class: CS2010
// Section: 1004
// Term: Fall 2026
// Author: Jonathan Cales
//
// Reflection: 

#include <iostream>

using namespace std;

// Declaring global variables for game board size, and character representations.
const int boardSize = 7;
const char emptyChar = '-';
const char hitChar = 'X';
const char missChar = 'O';

// I also want to try and make ship placement as random as possible, we'll see how it goes. No promises.
// Declare lengths of ships here for later use. I dumbed down the lengths on some of them in order to make space on the grid.
const int carrierLength = 4;
const int battleLength = 3;
const int cruiserLength = 2;
const int subLength = 2;
const int boatLength = 2;

// The game board will be a 2D array, populated later in the initializeGame function when called.
char gameBoard[boardSize][boardSize];

// Enemy positions will be stored in a 2D array identical to the game board, but will not be shown.
// Rubric indicates array will be populated with true statements where ships exist.
bool enemyPositions[boardSize][boardSize];

// Implementation of required functions per rubric.
// initializeGame will fill our game board with the appropriate values for the start of the game.
// This will also populate the enemyPositions array with the locations of the enemy ships.
void initializeGame() {

    // Local increment variables seperate from all other scopes of the program.
    // This may repeat in other functions.
    int i;
    int j;

    // Fill the board with empty characters to represent unoccupied spaces.
    for (i = 0; i < boardSize; i++){
        for (j = 0; j < boardSize; j++){
            gameBoard[i][j] = emptyChar;
        }
    }

    // Generate enemy ship positions.

    return;

    }

// printGameBoard will print the current state of the game board to the console.
void printGameBoard() {

    int i;
    int j;
    // K is introduced to keep track of the label of the rows.
    int k = 1;

    // Print full board with labels.
    cout << "  A B C D E F G" << endl;

    for (i = 0; i < boardSize; i++){
        cout << k << " ";
        for (j = 0; j < boardSize; j++){
            cout << gameBoard[i][j] << " ";
        }
        cout << endl;
        k = (k + 1);
    }

    return;

}
// hasShotThere is a check function in which it will ensure that the player's selected shot is not already used.
bool hasShotThere() {
// Function will return true if shot has already been used, false if not.
return false;
}

// checkHit is another check function that will determine if the player's shot was a hit or a miss.
bool checkHit() {
// Function will return true if hit, false if miss.
return false;
}
// isGameWon will check if the game has been won by the player. If all ships have been sunk, the game is won.
// Per documentation, game will always continue until all ships are sunk.
bool isGameWon() {
// Function will return true if game is won, false if not.
return false;
}

// recordGame will record the game results to a file.
void recordGame() {

}

int main() {
    // So I know the program is running fine for now.
    initializeGame();
    printGameBoard();
    return 0;
}