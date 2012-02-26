#include "board.h"
#include <iostream>
using namespace std;

Board::Board() {
	for (int i = 0; i <= 2; i++) {
		for (int k = 0; k <= 2; k++) {
			grid[i][k] = '-';
		}
	}
}

Board::~Board() {
	return;
}

int Board::draw_board() {
	cout << "___________________" << endl;
	for (int i = 0; i <= 2; i++){
		if (grid[i][0] == '-') {
			if (grid[i][1] == '-') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "|     |     |     |" << endl;
					cout << "|     |     |     |" << endl;
					cout << "|     |     |     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "|     |     | \\ / |" << endl;
					cout << "|     |     |  X  |" << endl;
					cout << "|     |     | / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "___ |" << endl;
					cout << "|     |     ||   ||" << endl;
					cout << "|     |     || O ||" << endl;
					cout << "|     |     ||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else if (grid[i][1] == 'X') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "|     | \\ / |     |" << endl;
					cout << "|     |  X  |     |" << endl;
					cout << "|     | / \\ |     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "|     | \\ / | \\ / |" << endl;
					cout << "|     |  X  |  X  |" << endl;
					cout << "|     | / \\ | / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "___ |" << endl;
					cout << "|     | \\ / ||   ||" << endl;
					cout << "|     |  X  || O ||" << endl;
					cout << "|     | / \\ ||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else if (grid[i][1] == 'O') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "___ |" << 3*i+3 << "    |" << endl;
					cout << "|     ||   ||     |" << endl;
					cout << "|     || O ||     |" << endl;
					cout << "|     ||___||     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "___ |" << 3*i+3 << "    |" << endl;
					cout << "|     ||   || \\ / |" << endl;
					cout << "|     || O ||  X  |" << endl;
					cout << "|     ||___|| / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "___ |" << 3*i+3 << "___ |" << endl;
					cout << "|     ||   |||   ||" << endl;
					cout << "|     || O ||| O ||" << endl;
					cout << "|     ||___|||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else return -1;
		}
		else if (grid[i][0] == 'X') {
			if (grid[i][1] == '-') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "| \\ / |     |     |" << endl;
					cout << "|  X  |     |     |" << endl;
					cout << "| / \\ |     |     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "| \\ / |     | \\ / |" << endl;
					cout << "|  X  |     |  X  |" << endl;
					cout << "| / \\ |     | / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "___ |" << endl;
					cout << "| \\ / |     ||   ||" << endl;
					cout << "|  X  |     || O ||" << endl;
					cout << "| / \\ |     ||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else if (grid[i][1] == 'X') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "| \\ / | \\ / |     |" << endl;
					cout << "|  X  |  X  |     |" << endl;
					cout << "| / \\ | / \\ |     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "| \\ / | \\ / | \\ / |" << endl;
					cout << "|  X  |  X  |  X  |" << endl;
					cout << "| / \\ | / \\ | / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "    |" << 3*i+3 << "___ |" << endl;
					cout << "| \\ / | \\ / ||   ||" << endl;
					cout << "|  X  |  X  || O ||" << endl;
					cout << "| / \\ | / \\ ||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else if (grid[i][1] == 'O') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "___ |" << 3*i+3 << "    |" << endl;
					cout << "| \\ / ||   ||     |" << endl;
					cout << "|  X  || O ||     |" << endl;
					cout << "| / \\ ||___||     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "___ |" << 3*i+3 << "    |" << endl;
					cout << "| \\ / ||   || \\ / |" << endl;
					cout << "|  X  || O ||  X  |" << endl;
					cout << "| / \\ ||___|| / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "    |" << 3*i+2 << "___ |" << 3*i+3 << "___ |" << endl;
					cout << "| \\ / ||   |||   ||" << endl;
					cout << "|  X  || O ||| O ||" << endl;
					cout << "| / \\ ||___|||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else return -1;
		}
		else if (grid[i][0] == 'O') {
			if (grid[i][1] == '-') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "||   ||     |     |" << endl;
					cout << "|| O ||     |     |" << endl;
					cout << "||___||     |     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "||   ||     | \\ / |" << endl;
					cout << "|| O ||     |  X  |" << endl;
					cout << "||___||     | / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "    |" << 3*i+3 << "___ |" << endl;
					cout << "||   ||     ||   ||" << endl;
					cout << "|| O ||     || O ||" << endl;
					cout << "||___||     ||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else if (grid[i][1] == 'X') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "||   || \\ / |     |" << endl;
					cout << "|| O ||  X  |     |" << endl;
					cout << "||___|| / \\ |     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "    |" << 3*i+3 << "    |" << endl;
					cout << "||   || \\ / | \\ / |" << endl;
					cout << "|| O ||  X  |  X  |" << endl;
					cout << "||___|| / \\ | / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "    |" << 3*i+3 << "___ |" << endl;
					cout << "||   || \\ / ||   ||" << endl;
					cout << "|| O ||  X  || O ||" << endl;
					cout << "||___|| / \\ ||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else if (grid[i][1] == 'O') {
				if (grid[i][2] == '-') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "___ |" << 3*i+3 << "    |" << endl;
					cout << "||   |||   ||     |" << endl;
					cout << "|| O ||| O ||     |" << endl;
					cout << "||___|||___||     |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'X') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "___ |" << 3*i+3 << "    |" << endl;
					cout << "||   |||   || \\ / |" << endl;
					cout << "|| O ||| O ||  X  |" << endl;
					cout << "||___|||___|| / \\ |" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else if (grid[i][2] == 'O') {
					cout << "|" << 3*i+1 << "___ |" << 3*i+2 << "___ |" << 3*i+3 << "___ |" << endl;
					cout << "||   |||   |||   ||" << endl;
					cout << "|| O ||| O ||| O ||" << endl;
					cout << "||___|||___|||___||" << endl;
					cout << "|_____|_____|_____|" << endl;
				}
				else return -1;
			}
			else return -1;
		}
		else return -1;
	}
	return 0;
}

bool Board::is_avail(const int spot) {
	switch (spot) {
		case 1:
			if (grid[0][0] == '-')
				return true;
			else
				return false;
			break;
		case 2:
			if (grid[0][1] == '-')
				return true;
			else
				return false;
			break;
		case 3:
			if (grid[0][2] == '-')
				return true;
			else
				return false;
			break;
		case 4:
			if (grid[1][0] == '-')
				return true;
			else
				return false;
			break;
		case 5:
			if (grid[1][1] == '-')
				return true;
			else
				return false;
			break;
		case 6:
			if (grid[1][2] == '-')
				return true;
			else
				return false;
			break;
		case 7:
			if (grid[2][0] == '-')
				return true;
			else
				return false;
			break;
		case 8:
			if (grid[2][1] == '-')
				return true;
			else
				return false;
			break;
		case 9:
			if (grid[2][2] == '-')
				return true;
			else
				return false;
			break;
		default:
			return false;
			break;
	}
}

void Board::set(const int spot, const char marker) {
	switch (spot) {
		case 1:
			grid[0][0] = marker;
			break;
		case 2:
			grid[0][1] = marker;
			break;
		case 3:
			grid[0][2] = marker;
			break;
		case 4:
			grid[1][0] = marker;
			break;
		case 5:
			grid[1][1] = marker;
			break;
		case 6:
			grid[1][2] = marker;
			break;
		case 7:
			grid[2][0] = marker;
			break;
		case 8:
			grid[2][1] = marker;
			break;
		case 9:
			grid[2][2] = marker;
			break;
		default:
			break;
	}
}

char Board::get_marker_at(const int spot) {
	switch (spot) {
		case 1:
			return grid[0][0];
			break;
		case 2:
			return grid[0][1];
			break;
		case 3:
			return grid[0][2];
			break;
		case 4:
			return grid[1][0];
			break;
		case 5:
			return grid[1][1];
			break;
		case 6:
			return grid[1][2];
			break;
		case 7:
			return grid[2][0];
			break;
		case 8:
			return grid[2][1];
			break;
		case 9:
			return grid[2][2];
			break;
		default:
			return '-';
			break;
	}
	
}

void Board::ClearScreen() {
	cout << string( 100, '\n');
}