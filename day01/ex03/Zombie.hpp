#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie {

	private:
		std::string _name;
		std::string _type;
		static int id;

	public:
		Zombie();
		~Zombie(void);
		
		void announce();
};
#endif