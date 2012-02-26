#include "player.h"
#include "game.h"
#include <algorithm>

Player::Player(Game* g, char marker) {
	m_game = g;
	m_marker = marker;
}

Player::~Player() {
	return;
}

bool Player::in_spot(const int spot) {
	if (find(m_spots.begin(), m_spots.end(), spot) != m_spots.end())
		return true;
	else {
		return false;
	}

}

void Player::take_spot(const int spot) {
	m_game->get_board()->set(spot, m_marker);
	m_spots.push_front(spot);
}

char Player::get_marker() {
	return m_marker;
}