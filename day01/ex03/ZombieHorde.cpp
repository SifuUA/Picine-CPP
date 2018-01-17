# include "ZombieHorde.hpp"
#include <iostream>
ZombieHorde::ZombieHorde(int N){
	this->_N = N;
	this->_zombie = new Zombie[N];
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_zombie;
}

void ZombieHorde::announce() {
	int i = 0;

	while(i < this->_N) {
		this->_zombie[i].announce();
		i++;
	}
}