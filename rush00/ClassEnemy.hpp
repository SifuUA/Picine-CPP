#ifndef RUSH00_CLASSENEMY_HPP
#define RUSH00_CLASSENEMY_HPP

#include <ncurses.h>

class Enemy {
	unsigned int _x, _y;
	WINDOW *_win;
	bool _onScreen;

public:

	Enemy();

	Enemy(WINDOW *win);

	Enemy(const Enemy &src);

	~Enemy();

	Enemy &operator=(const Enemy &src);

	unsigned int getX() const;

	unsigned int getY() const;

	void setY(unsigned int y);

	WINDOW *getWin() const;

	bool getOnScreen() const;

	void setOnScreen(bool status);

	void move();

	void clear();

	void display();
};


#endif //RUSH00_CLASSENEMY_HPP
