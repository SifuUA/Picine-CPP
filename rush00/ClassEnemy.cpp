#include <ClassEnemy.hpp>
#include <ft_retro.h>
#include <ctime>
#include <cstdlib>

Enemy::Enemy() : _x(), _y(), _win(NULL), _onScreen(false) {
	display();
}

Enemy::Enemy(WINDOW *win) : _x(WIDTH - 2), _win(win), _onScreen(false) {
	setY(rand() % (HEIGHT - 2) + 1);
	display();
}

Enemy::Enemy(Enemy const &src) {
	*this = src;
}

Enemy::~Enemy() {}

Enemy &Enemy::operator=(const Enemy &src)
{
	if (this != &src)
	{
		_win = src.getWin();
		_onScreen = src.getOnScreen();
		_x = src.getX();
		_y = src.getY();
	}
	return *this;
}

unsigned int Enemy::getX() const {
	return _x;
}

unsigned int Enemy::getY() const {
	return _y;
}

void Enemy::setY(unsigned int y)
{
	_y = y;
}

WINDOW *Enemy::getWin() const {
	return _win;
}

bool Enemy::getOnScreen() const {
	return _onScreen;
}

void Enemy::setOnScreen(bool status) {
	_onScreen = status;
}

void Enemy::move() {
	if (_x > 2)
	{
		clear();
		_x--;
		display();
	}
	else {
		_onScreen = false;
		clear();
	}
}

void Enemy::clear() {
	_onScreen = false;
	mvwaddch(_win, _y, _x, ' ');
	wrefresh(_win);
}

void Enemy::display() {
	_onScreen = true;
	mvwaddch(_win, _y, _x, '*');
	wrefresh(_win);
}
