#ifndef CLASS_INFO_H
#define CLASS_INFO_H

#include <ncurses.h>
#include <ft_retro.h>
#include <string>



class Info
{
	public:

		Info();

		~Info();

		Info(const Info &src);

		Info &operator=(const Info &src);

		void show_info(WINDOW *menuwin);

		int startMenu(WINDOW *menuwin);
};
#endif






