# include <ncurses.h>
# include <string>
# include <cstdlib>
# include <ctime>
# include <iostream>
# include "ClassGameEntity.hpp"
# define WIDTH 142
# define HEIGHT 42

int startMenu(WINDOW *menuwin) {
	int choice;
	int tmp = 0;
	std::string choices [2] = {"PLAY", "EXIT"};

	keypad(menuwin, true);
	while(1) {
		for (int i = 0; i < 2; i++) {
			if (i == tmp) 
				wattron(menuwin, A_REVERSE);
			mvwprintw(menuwin, i + 19, (WIDTH - std::strlen(choices[i].c_str())) / 2, choices[i].c_str());
			wattroff(menuwin, A_REVERSE);
		}
		choice = wgetch(menuwin);
		switch(choice) {
			case KEY_UP:
				tmp--;
				if(tmp == -1)
					tmp = 0;
				break;
			case KEY_DOWN:
				tmp++;
				if(tmp == 2)
					tmp = 1;
				break;
			default:
				break;
		}
		if(choice == 10)
			break;
	}
	wclear(menuwin);
	box(menuwin, 0, 0);
	return tmp;
}

int main (int argc, char **argv) {

	//NCURSES START
	initscr();
	noecho();
	cbreak();

	//HIDE CURSOR
	curs_set(0);

	//GET SCREN SIZE
	int yMax;
	int xMax;
	getmaxyx(stdscr, yMax, xMax);
	
	//CREAT WINDOW FOR OUR INPUT
	WINDOW * playwin = newwin(HEIGHT, WIDTH, (yMax/2)-10, 10);
	box(playwin, 0, 0);
	refresh();
	wrefresh(playwin);

	if (startMenu(playwin) == 1) {
		wclear(playwin);
		return (0);
	}
	ClassGameEntity *p = new ClassGameEntity(playwin, 1, 1, '>');
	p->display();
	wrefresh(playwin);
	while(p->getMv() != 'q') {
		p->display();
		wrefresh(playwin);
	}

	//PROGRAM WAITS BEFORE EXIT
	getch();
	//NCURSES END
	endwin();
}