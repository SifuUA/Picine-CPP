# include "Zombie.hpp"

int id = 0;

std::string getRandomZombieName() {
	std::string names [] = {"Charly", "Piter", "Ron", "Jack",
						 "Howard", "Adam", "Make", "Tom", 
							"Bred", "William"};
	if(id > 9) 
		id = 0;
	return names[id++];
}

Zombie::Zombie(void):_name(getRandomZombieName()), _type("Danger") {
}

Zombie::~Zombie(void) {
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type 
				<< ")> Braiiiiiiinnnssss..." << std::endl;	
}
