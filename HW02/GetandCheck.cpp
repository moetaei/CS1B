/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

/******************************************************************************
 * Get and Check Input
 * Gets user input for players 1 or 2 and also for PC play. String is passed in
 * to evaluate as PC.
 * Takes coordinates inputed and allots them to the correct spot on the
 * array tic tac toe board
 */

#include "header.h"

void GetAndCheckInp(char boardAr[][3], char token, string playerX,
		string playerO) {
	int x = 0; // coordinate for array
	int y = 0; // coordinate for array
	char whoWon = 'T'; // win check

	do {

		char whoWon = 'T';
		system("cls"); 			// clear previous scren
		DisplayBoard(boardAr); // display grid array

		cout << "It is " << playerX << "'s turn. Enter your row:" << endl;
			cin >> x;
			cout << "enter your column: ";
			cin >> y;
			//*taking input for coordinates. decrementing them below to fit
			//*dimensions*//

			x--;
			y--;

		if ((boardAr[x][y]) != ' ' || x > 3 || y > 3) { // check for blank space
													//and fitting within array.
			cout << "Sorry space is taken" << endl;
				system("cls");
			DisplayBoard(boardAr);
			// repeat input
			cout << "It is " << playerX << "'s turn. Enter your row:" << endl;
					cin >> x;
			cout << "enter your column: ";
					cin >> y;
						 x--;
						 y--;
		}

		boardAr[x][y] = token;  	// assign token (X or O) to location
		whoWon = CheckWin(boardAr); // check for win lose or tie

		if (playerO != "PC") { 		// Computer does not need to display unlike
									// two player mode.
			DisplayBoard(boardAr);
							 }
		if (whoWon == 'X' || whoWon == 'O') {
			// checks whoWon variable and assigns output.
			OutputWinner(whoWon, playerX, token, boardAr);
			break;
											}
		if (whoWon == 'F') { //checks whoWon variable and assigns output for tie.
				system("cls"); // clear previous screen
				DisplayBoard(boardAr); // show tie screen
				cout << "Its a tie!" << endl << endl;
				InitBoard(boardAr); // initialize board back to zero
				cin.ignore(1000, '\n'); // clear buffer for next go round
				break;
		}
		if (playerO != "PC") {

				system("cls");
				DisplayBoard(boardAr);

				cout << "It is " << playerO << "'s turn. Enter your row:" << endl;
					cin >> x;
				cout << "enter your column: ";
					cin >> y;
					//*taking input for coordinates. decrementing them below to fit
							//*dimensions*//
						 x--;
						 y--;
			{
				if ((boardAr[x][y]) != ' ' || x > 3 || y > 3) { // check for
											//blank space and fit within array.
					cout << "Sorry space is taken" << endl;
					cout << "It is " << playerO << "'s turn. Enter your row:"
												   << endl;
						cin >> x;
					cout << "enter your column: ";
						cin >> y;
						//*taking input for coordinates. decrementing them below to fit
								//*dimensions*//
							 x--;
							 y--;
															  }

				token = SwitchToken(token);
				boardAr[x][y] = token;

					system("cls");

				DisplayBoard(boardAr);	// assign token (X or O) to location
				whoWon = CheckWin(boardAr); // check for win lose or tie

				if (whoWon == 'X' || whoWon == 'O') {// checks whoWon variable
													 // and assigns output.
					OutputWinner(whoWon, playerO, token, boardAr); //Output
						break;
				}
					token = SwitchToken(token); // switch from X to O or opp
				}
			}
	} while (whoWon == 'T'); // game run variable

}
