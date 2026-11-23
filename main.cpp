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

// The game board will be a 2D array, populated later in the initializeGame function when called.
string gameBoard[boardSize][boardSize];

// Implementation of required functions per rubric.
// initializeGame will fill our game board with the appropriate values for the start of the game.
void initializeGame() {    
}
// printGameBoard will print the current state of the game board to the console.
void printGameBoard() {

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
    cout << "Welcome to Battleship!" << endl;
    return 0;
}