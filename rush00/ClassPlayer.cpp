
#include <ClassPlayer.hpp>
#include <ft_retro.h>
#include <unistd.h>

Player::Player() : _x(1), _y(HEIGHT / 2), _chr('>') {
}

Player::Player(WINDOW *win, int chr) : _x(1), _y(HEIGHT / 2), _chr(chr), _win(win)	{
	display();
}

Player::Player(Player const &src) {
	*this = src;
}

Player::~Player() {}

Player &Player::operator=(const Player &src) {
	if (this != &src) {
		_x = src.getX();
		_y = src.getY();
	}
	return *this;
}

void Player::moveUp() {
	clear();
	if (_y > 1)
		_y--;
	display();
}

void Player::moveDown() {
	clear();
	if (_y < HEIGHT - 2)
		_y++;
	display();
}

void Player::moveLeft() {
	clear();
	if (_x > 2)
		_x--;
	display();
}

void Player::moveRight() {
	clear();
	if (_x < WIDTH - 2)
		_x++;
	display();
}

//void Player::shot() {
//	bullets[0] = Bullet(_win, '-', getX() + 1, getY());
////	mvwaddstr(_win, 1, 1, "test");
////	sleep(2);
//	for (int i = getX() + 1; i < WIDTH - 2; ++i) {
//		bullets[0].move();
//		nodelay(_win, TRUE);
//		usleep(30000);
//	}
//	bullets[0].clear();
//}

void Player::clear() const {
	mvwaddch(_win, _y, _x, ' ');
	wrefresh(_win);
}

void Player::display() const {
	mvwaddch(_win, _y, _x, _chr);
	wrefresh(_win);
}

//void Player::dispLife(void) {
//	int i = 0;
//	while (i < countLife) {
//		mvwaddch(curWind, 68, i, '+');
//		i++;
//	}
//}

//void Player::shot(void) {
//
//}

unsigned int Player::getX() const {
	return _x;
}

unsigned int Player::getY() const {
	return _y;
}

bool Player::operator==(Enemy &src) {
	if (_x == src.getX() && _y == src.getY() && src.getOnScreen())
		return true;
	return false;
}
