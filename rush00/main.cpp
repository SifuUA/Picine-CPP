# include <ncurses.h>
# include <string>
# include <cstdlib>
# include <ctime>
# include "ClassGameEntity.hpp"

int main (int argc, char **argv) {

	//NCURSES START
	initscr();
	noecho();
	cbreak();

	//GET SCREN SIZE
	int yMax;
	int xMax;
	getmaxyx(stdscr, yMax, xMax);

	//CREAT WINDOW FOR OUR INPUT
	WINDOW * playwin = newwin(30, 90, (yMax/2)-10, 10);
	box(playwin, 0, 0);
	refresh();
	wrefresh(playwin);

	ClassGameEntity *p = new ClassGameEntity(playwin, 1, 1, '>');
	while(p->getMv() != 'x') {
		p->display();
		wrefresh(playwin);
	}


	//PROGRAM WAITS BEFORE EXIT
	getch();
	//NCURSES END
	endwin();
}