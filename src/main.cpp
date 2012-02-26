#include <iostream>
#include <stdio.h>
#include <string>
#include "game.h"
using namespace std;

int main (int argc, char * const argv[]) {
	
	cout << string(100, '\n');
	cout << "Welcome to Tic-Tac-Toe! Please choose an option below:" << endl << endl;
	cout << "1) Human v. Human" << endl;
	cout << "2) Human v. Computer (Not Yet Implemented!)" << endl << endl;
	cout << "Which option?: ";
	
	string input;
	int n;
	bool choice = false;
	do {
		cin >> input;
		n = atoi(input.c_str());
		if (n == 1)
			choice = true;
		else {
			cout << endl << "Invalid option. Please try again." << endl << "Which option?: ";
		}

	} while (!choice);
	
	bool replay = false;
	Game* g;
	
	do {
		g = new Game;
		g->run();
		if (g->is_winner())
			cout << "The winner is Player " << g->get_winner() << "! Good game!" << endl;
		else
			cout << "That was a cat's game, nobody won." << endl;
		do {
			cout << "Would you like a rematch? (y/n): ";
			cin >> input;
			for (unsigned int i = 0; i < input.length(); i++) {
				input.at(i) = tolower(input.at(i));
			}
			if (input == "y" || input == "yes") {
				replay = true;
				break;
			}
			else if (input == "n" || input == "no") {
				replay = false;
				break;
			}
			else {
				cout << endl << "You did not enter a valid response. Please try again." << endl << endl;
			}

		} while (1);
		delete g;
	} while (replay);
	
	return 0;
};
