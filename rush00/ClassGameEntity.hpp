#ifndef CLASS_GAME_ENTITY_H
# define CLASS_GAME_ENTITY_H


class ClassGameEntity
{
	public:
		ClassGameEntity();
		ClassGameEntity(WINDOW *win, int y, int x, char c);
		ClassGameEntity(ClassGameEntity const &src);
		~ClassGameEntity();

		ClassGameEntity &operator=(ClassGameEntity const &rhs);
		void	mvUp();
		void	mvDown();
		void	mvLeft();
		void	mvRight();
		int		getMv();
		void 	dispaly();

	private:
		int		xLoc;
		int 	yLoc;
		int 	xMax;
		int 	yMax;
		char	chr;
		WINDOW	*curWind;
};
	
#endif