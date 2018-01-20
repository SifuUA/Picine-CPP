#ifndef CLASS_GAME_ENTITY_H
# define CLASS_GAME_ENTITY_H
# include <ncurses.h>


class ClassGameEntity
{
	public:
		ClassGameEntity();
		ClassGameEntity(WINDOW *win, int y, int x, char c);
		ClassGameEntity(ClassGameEntity const &src);
		~ClassGameEntity();

		ClassGameEntity &operator=(ClassGameEntity const &rhs);
		void	mvUp(void);
		void	mvDown(void);
		void	mvLeft(void);
		void	mvRight(void);
		int		getMv(void);
		void 	display(void);

	private:
		int		xLoc;
		int 	yLoc;
		int 	xMax;
		int 	yMax;
		char	chr;
		WINDOW	*curWind;
};
	
#endif