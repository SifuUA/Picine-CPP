# include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type):_name(name), _type(type) {
}

Zombie::~Zombie(void) {
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type 
				<< ")> Braiiiiiiinnnssss..." << std::endl;	
}
