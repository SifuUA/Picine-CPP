# include <iostream>
# include "Pony.hpp"

Pony::Pony(std::string name, int age) : _name(name), _age(age) {
	std::cout << "Constructor called" << std::endl;
}

Pony::~Pony(void) {
	std::cout << "Distructor called" << std::endl;
}

std::string Pony::getName(void) {
	return this->_name;
}

int Pony::getAge(void)	 {
	return this->_age;
}