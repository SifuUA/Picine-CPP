#ifndef CLASS_PLAYER_H
# define CLASS_PLAYER_H

#include <ncurses.h>
#include "ClassEnemy.hpp"

class Player {

	unsigned int _x, _y;
	int _chr;
	WINDOW *_win;
//	int _countLife;

public:

	Player();

	Player(WINDOW *win, int chr);

	Player(Player const &src);

	~Player();

	Player &operator=(Player const &src);

	void moveUp();

	void moveDown();

	void moveLeft();

	void moveRight();

	void clear() const;

	void display() const;

	bool operator==(Enemy &src);

	unsigned int getX() const;

	unsigned int getY() const;

};

#endif