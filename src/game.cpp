#include "game.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game() {
	player_1 = new Player(this, 'X');
	player_2 = new Player(this, 'O');
	m_board = new Board;
	m_winner = '-';
}

Game::~Game() {
	delete player_1;
	delete player_2;
	delete m_board;
}

void Game::run() {
	Player* current_player = player_1;
	Player* other_player = player_2;
	Player* temp_player = NULL;
	string input;
	int n;
	while (!is_winner()) {
		m_board->ClearScreen();
		m_board->draw_board();
		cout << "You, " << current_player->get_marker() << ", have the following spots: ";
		if (current_player->in_spot(1))
			cout << "1 ";
		if (current_player->in_spot(2))
			cout << "2 ";
		if (current_player->in_spot(3))
			cout << "3 ";
		if (current_player->in_spot(4))
			cout << "4 ";
		if (current_player->in_spot(5))
			cout << "5 ";
		if (current_player->in_spot(6))
			cout << "6 ";
		if (current_player->in_spot(7))
			cout << "7 ";
		if (current_player->in_spot(8))
			cout << "8 ";
		if (current_player->in_spot(9))
			cout << "9 ";
		cout << endl;
		cout << "Player " << other_player->get_marker() << " has the following spots: ";
		if (other_player->in_spot(1))
			cout << "1 ";
		if (other_player->in_spot(2))
			cout << "2 ";
		if (other_player->in_spot(3))
			cout << "3 ";
		if (other_player->in_spot(4))
			cout << "4 ";
		if (other_player->in_spot(5))
			cout << "5 ";
		if (other_player->in_spot(6))
			cout << "6 ";
		if (other_player->in_spot(7))
			cout << "7 ";
		if (other_player->in_spot(8))
			cout << "8 ";
		if (other_player->in_spot(9))
			cout << "9 ";
		
		cout << endl << endl;
		cout << "It is " << current_player->get_marker() << "\'s turn. Please choose a spot (1-9): ";
		do {
			cin >> input;
			n = atoi(input.c_str());
			if (n < 1 || n > 9) {
				m_board->ClearScreen();
				m_board->draw_board();
				cout << endl << endl;
				cout << "Invalid input, Player " << current_player->get_marker() << ". Please try again. Please choose a spot (1-9): ";
				continue;
			}
			if (!m_board->is_avail(n)) {
				m_board->ClearScreen();
				m_board->draw_board();
				cout << endl << endl;
				cout << "That spot was already taken, Player " << current_player->get_marker() << ". Please try again. Please choose a spot (1-9): ";
				continue;
			}
			else
				break;
		} while (1);
		current_player->take_spot(n);
		
		determine_winner();
		if (is_winner()) {
			m_board->ClearScreen();
			m_board->draw_board();
			cout << endl << endl;
			return;
		}
		else if (!m_board->is_avail(1) && !m_board->is_avail(2) && !m_board->is_avail(3) &&
		!m_board->is_avail(4) && !m_board->is_avail(5) && !m_board->is_avail(6) &&
		!m_board->is_avail(7) && !m_board->is_avail(8) && !m_board->is_avail(9)) {
			m_board->ClearScreen();
			m_board->draw_board();
			cout << endl << endl;
			return;
		}
		else {
			temp_player = current_player;
			current_player = other_player;
			other_player = temp_player;
			continue;
		}
	}
}

Player* Game::get_player_1() {
	return(player_1);
}

Player* Game::get_player_2() {
	return(player_2);
}

Board* Game::get_board() {
	return(m_board);
}

void Game::determine_winner() {
	if ((player_1->in_spot(1) && player_1->in_spot(2) && player_1->in_spot(3)) ||
		(player_1->in_spot(4) && player_1->in_spot(5) && player_1->in_spot(6)) ||
		(player_1->in_spot(7) && player_1->in_spot(8) && player_1->in_spot(9)) ||
		(player_1->in_spot(1) && player_1->in_spot(4) && player_1->in_spot(7)) ||
		(player_1->in_spot(2) && player_1->in_spot(5) && player_1->in_spot(8)) ||
		(player_1->in_spot(3) && player_1->in_spot(6) && player_1->in_spot(9)) ||
		(player_1->in_spot(1) && player_1->in_spot(5) && player_1->in_spot(9)) ||
		(player_1->in_spot(3) && player_1->in_spot(5) && player_1->in_spot(7))) {
		m_winner = player_1->get_marker();
	}
	else if ((player_2->in_spot(1) && player_2->in_spot(2) && player_2->in_spot(3)) ||
			 (player_2->in_spot(4) && player_2->in_spot(5) && player_2->in_spot(6)) ||
			 (player_2->in_spot(7) && player_2->in_spot(8) && player_2->in_spot(9)) ||
			 (player_2->in_spot(1) && player_2->in_spot(4) && player_2->in_spot(7)) ||
			 (player_2->in_spot(2) && player_2->in_spot(5) && player_2->in_spot(8)) ||
			 (player_2->in_spot(3) && player_2->in_spot(6) && player_2->in_spot(9)) ||
			 (player_2->in_spot(1) && player_2->in_spot(5) && player_2->in_spot(9)) ||
			 (player_2->in_spot(3) && player_2->in_spot(5) && player_2->in_spot(7))) {
		m_winner = player_2->get_marker();
	}
	return;
}

bool Game::is_winner() {
	if (m_winner != '-')
		return true;
	else
		return false;
}

char Game::get_winner() {
	return m_winner;
}
