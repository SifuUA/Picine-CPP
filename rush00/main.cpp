#include <ClassPlayer.hpp>
#include <ClassBullet.hpp>
#include <unistd.h>
#include <ft_retro.h>
#include <ClassEnemy.hpp>
#include <ClassInfo.hpp>

void msg_exit(WINDOW *win, WINDOW *win_score, WINDOW *win1, std::string msg) {
	delwin(win);
	delwin(win_score);
	delwin(win1);
	endwin();
	std::cout << msg << std::endl;
	exit(0);
}

int main() {
	WINDOW *win, *win_score, *win1;
	int chr, score = 0;
	bool quit = false;
	Bullet bullets[42];
	Enemy enemys[42];
	Info info;

	initscr();
	curs_set(0);
	noecho();
	win = newwin(HEIGHT, WIDTH, 0, 0);
	win_score = newwin(3, WIDTH, HEIGHT + 2, 0);
	win1 = newwin(HEIGHT, WIDTH, 0, 0);
	box(win1, 0, 0);
	if (info.startMenu(win1)) {
		msg_exit(win, win_score, win1, "GOODBY!");
		return (0);
	}
	Player p = Player(win, '>');
	nodelay(win, TRUE);
	keypad(win, TRUE);
	box(win, 0, 0);
	box(win_score, 0, 0);
	while (!quit) {
		chr = wgetch(win);
		switch (chr) {
			case ' ':
				for (int i = 0; i < 42; ++i) {
					if (!bullets[i].getOnScreen()) {
						bullets[i] = Bullet(win, '-', p.getX() + 1, p.getY());
						bullets[i].setOnScreen(true);
						break;
					}
				}
				break;
			case KEY_UP:
				p.moveUp();
				break;
			case KEY_DOWN:
				p.moveDown();
				break;
			case KEY_LEFT:
				p.moveLeft();
				break;
			case KEY_RIGHT:
				p.moveRight();
				break;
			case 'q':
				quit = true;
			default:
				break;
		}
		for (int j = 0; j < 42; ++j) {
			if (!enemys[j].getOnScreen()) {
				enemys[j] = Enemy(win);
				break;
			}
		}
		for (int k = 0; k < 42; ++k) {
			if (enemys[k].getOnScreen()) {
				enemys[k].move();
				if (p == enemys[k]) {
					msg_exit(win, win_score, win1, "YOU LOSE");
				}
			}
		}
		for (int i = 0; i < 42; ++i) {
			if (bullets[i].getOnScreen())
				bullets[i].move();
		}
		for (int l = 0; l < 42; ++l) {
			for (int i = 0; i < 42; ++i) {
				if (bullets[l] == enemys[i]) {
					bullets[l].clear();
					enemys[i].clear();
					mvwprintw(win_score, 1, 1, "SCORE: %03d", ++score);
					wrefresh(win_score);
				}
			}
		}
		if (score == 42)
			msg_exit(win, win_score, win1, "YOU WON");
		usleep(50000);
	}
	wrefresh(win); 
	delwin(win);
	delwin(win_score);
	delwin(win1);
	endwin();
	return 0;
}
