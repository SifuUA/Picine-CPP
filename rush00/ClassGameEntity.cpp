# include "ClassGameEntity.hpp"
# include <string>
# include <cstdlib>
# include <ctime>

ClassGameEntity::ClassGameEntity(void) {
}

ClassGameEntity::ClassGameEntity(WINDOW *win, int y, int x, char c) {
	curWind = win;
	yLoc = y;
	xLoc = x;
	getmaxyx(curWind, yMax, xMax);
	keypad(curWind, true);
	chr = c;	

}

ClassGameEntity::ClassGameEntity(ClassGameEntity const &src) {
	*this = src;
}

ClassGameEntity::~ClassGameEntity(void) {
}

ClassGameEntity &ClassGameEntity::operator=(ClassGameEntity const &rhs) {
	return *this;
}	

void ClassGameEntity::mvUp(void) {
	mvwaddch(curWind, yLoc, xLoc, ' ');
	yLoc--;
	if (yLoc < 1)
		yLoc = 1;
}

void ClassGameEntity::mvDown(void) {
	mvwaddch(curWind, yLoc, xLoc, ' ');
	yLoc++;
	if (yLoc > yMax - 2)
		yLoc = yMax - 2;
}

void ClassGameEntity::mvRight(void) {
	mvwaddch(curWind, yLoc, xLoc, ' ');
	xLoc++;
	if (xLoc > xMax - 2)
		xLoc = xMax - 2;
}

void ClassGameEntity::mvLeft(void) {
	mvwaddch(curWind, yLoc, xLoc, ' ');
	xLoc--;
	if (xLoc < 1)
		xLoc = 1;
}

int ClassGameEntity::getMv(void) {
	int choice = wgetch(curWind);

	switch(choice) {
		case KEY_UP:
			mvUp();
			break;
		case KEY_DOWN:
			mvDown();
			break;
		case KEY_RIGHT:
			mvRight();
			break;
		case KEY_LEFT:
			mvLeft();
			break;
		default:
			break;
	}
	return choice;
}

void ClassGameEntity::display() {
	mvwaddch(curWind, yLoc, xLoc, chr);
}

