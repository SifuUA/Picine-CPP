# include "ClassInfo.hpp"

Info::Info() {

}

Info::~Info() {
	
}

Info::Info(Info const &src) {
	*this = src;
}

Info &Info::operator=(const Info &src) {
	if (this == &src)
		return *this;
	return *this;
}

void Info::show_info(WINDOW *menuwin) {
	std::string s1 = "GAME INSTRUCTION:";
	std::string s5 = "-> Press 'SPACE' - to shot <-";
	std::string s6 = "-> Press '->' to move right <-";
	std::string s7 = "-> Press '<-' to move right <-";
	std::string s8 = "-> Press 'UP' to move right <-";
	std::string s9 = "-> Press 'DOWN' to move right <-";
	std::string s10 = "-> Press 'Q' to quit from game mode <-";
	std::string s11= "MADE BY KHRECHEN AND OKRES";

	start_color();

	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_MAGENTA, COLOR_WHITE);
	init_pair(3, COLOR_YELLOW, COLOR_BLUE);
	init_pair(4, COLOR_BLACK, COLOR_BLUE);
	init_pair(5, COLOR_GREEN, COLOR_BLACK);

	wattron(menuwin, COLOR_PAIR(5));
	mvwprintw(menuwin, HEIGHT - 20, (WIDTH - std::strlen(s1.c_str())) / 2, s1.c_str());
	mvwprintw(menuwin, HEIGHT - 19, (WIDTH - std::strlen(s5.c_str())) / 2, s5.c_str());
	mvwprintw(menuwin, HEIGHT - 18, (WIDTH - std::strlen(s6.c_str())) / 2, s6.c_str());
	mvwprintw(menuwin, HEIGHT - 17, (WIDTH - std::strlen(s7.c_str())) / 2, s7.c_str());
	mvwprintw(menuwin, HEIGHT - 16, (WIDTH - std::strlen(s8.c_str())) / 2, s8.c_str());
	mvwprintw(menuwin, HEIGHT - 15, ((WIDTH - std::strlen(s9.c_str())) / 2) + 1, s9.c_str());
	mvwprintw(menuwin, HEIGHT - 14, ((WIDTH - std::strlen(s10.c_str())) / 2) + 4, s10.c_str());
	wattroff(menuwin, COLOR_PAIR(5));
	
	wattron(menuwin, COLOR_PAIR(1));
	mvwprintw(menuwin, HEIGHT - 2, ((WIDTH - std::strlen(s11.c_str())) - 4) , s11.c_str());
	wattroff(menuwin, COLOR_PAIR(1));
}

int Info::startMenu(WINDOW *menuwin) {
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
		show_info(menuwin);
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
