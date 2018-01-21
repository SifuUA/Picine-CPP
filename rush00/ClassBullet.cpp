#include <ClassBullet.hpp>
#include <ft_retro.h>

Bullet::Bullet() : _onScreen(false) {}

Bullet::Bullet(WINDOW *win, int chr, unsigned int x, unsigned int y) :_x(x), _y(y),
																	   _win(win) {
	_onScreen = true;
	_chr = chr;
	display();
}

Bullet::Bullet(const Bullet &src) {
	*this = src;
}

Bullet::~Bullet() {}

Bullet &Bullet::operator=(const Bullet &src) {
	if (this != &src) {
		_x = src.getX();
		_y = src.getY();
		_chr = src.getChr();
		_win = src.getWin();
		_onScreen = false;
	}
	return *this;
}

unsigned int Bullet::getX() const {
	return _x;
}

unsigned int Bullet::getY() const {
	return _y;
}

int Bullet::getChr() const {
	return _chr;
}

WINDOW *Bullet::getWin() const {
	return _win;
}

bool Bullet::getOnScreen() const {
	return _onScreen;
}

void Bullet::setOnScreen(bool status) {
	_onScreen = status;
}

void Bullet::move() {
	if (_x < WIDTH - 2)
	{
		clear();
		_x++;
		display();
	}
	else {
		_onScreen = false;
		clear();
	}
}

void Bullet::clear() {
	_onScreen = false;
	mvwaddch(_win, _y, _x, ' ');
	wrefresh(_win);
}

void Bullet::display() {
	_onScreen = true;
	mvwaddch(_win, _y, _x, _chr);
	wrefresh(_win);
}

bool Bullet::operator==(Enemy &src) {
	if (_x == src.getX() && _y == src.getY() && _onScreen && src.getOnScreen())
		return true;
	return false;
}
