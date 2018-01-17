# include <cstdlib>
# include <ctime>
# include "Zombie.hpp"
# include "ZombieEvent.hpp"


std::string getRandomZombieName() {
	std::string names [] = {"Charly", "Piter", "Ron", "Jack",
						 "Howard", "Adam", "Make", "Tom", 
							"Bred", "William"};
	srand(time(NULL));
	int num = rand() % 9;
	return names[num];
}

void 	getZombie() {
	ZombieEvent zombieEvent = ZombieEvent();
	zombieEvent.setZombieType("Danger");
	Zombie *newZombik = zombieEvent.newZombie(getRandomZombieName());
	newZombik->announce();
	delete newZombik;
}

int		main(void) {
	std::cout << "Create zombie on the heap." << std::endl;
	getZombie();
	std::cout << "Create zombie on the stack." << std::endl;
	Zombie zombie = Zombie("Garry", "Kind");
	zombie.announce();
}