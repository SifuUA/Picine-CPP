# include <ncurses.h>
# include <string>
# include <cstdlib>
# include <ctime>

int main (void) {

	//NCURSES START
	initscr();
	noecho();
	cbreak();

	//GET SCREN SIZE
	int yMax;
	int xMax;
	getmaxyx(stdscr, yMax, xMax);

	//CREAT WINDOW FOR OUR INPUT
	WINDOW * playwin = newwin(20, 50 (yMax/2) - 10, 10);
	box(playwin, 0, 0);
	refresh();
	wrefresh(playwin);

	//PROGRAM WAITS BEFORE EXIT
	getch();
	//NCURSES END
	endwin();
}