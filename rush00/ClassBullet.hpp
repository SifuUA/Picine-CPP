#ifndef RUSH00_ClassBullet_HPP
#define RUSH00_ClassBullet_HPP

#include <iostream>
#include <ncurses.h>
#include <ClassEnemy.hpp>

class Bullet {

	unsigned int _x, _y;
	int _chr;
	WINDOW *_win;
	bool _onScreen;

public:

	Bullet();

	Bullet(WINDOW *win, int chr, unsigned int x, unsigned int y);

	Bullet(const Bullet &src);

	~Bullet();

	Bullet &operator=(const Bullet &src);

	unsigned int getX() const;

	unsigned int getY() const;

	WINDOW *getWin() const;

	int getChr() const;

	bool getOnScreen() const;

	void setOnScreen(bool status);

	bool operator==(Enemy &src);

	void move();

	void clear();

	void display();
};

#endif //RUSH00_ClassBullet_HPP
