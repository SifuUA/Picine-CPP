#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int _N;
		Zombie *_zombie;

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void announce();
};
#endif