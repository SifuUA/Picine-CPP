# include "FragTrap.hpp"

const int FragTrap::_maxHitPoints = 100;
const int FragTrap::_level = 1;
const int FragTrap::_maxEnergyPoints = 100;
const int FragTrap::_meleeAttackDamage = 30;
const int FragTrap::_rangedAttackDamage = 20;
const int FragTrap::_armorDamageReduction = 5;

FragTrap::FragTrap() {
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):_name(name) {
	this->_hitPoints = _maxHitPoints;
	this->_energyPoints = _maxEnergyPoints;
	std::cout << "Initializing constructor called" << std::endl;
	std::cout << "Create FR4G-TP with name - " << this->_name << std::endl
			  << "current hit points - " << this->_hitPoints << "hp " << std::endl
			  << "current energy point - " << this->_energyPoints << "hp " << std::endl
			  << "current level = " << this->_level << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Distructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs.getName();
	}
	return *this;
}

std::string FragTrap::getName(void) const {
	return this->_name;
}

void FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP deals damage in ranged combat to the "
			  << target << " in the size " << _rangedAttackDamage 
			  << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP with name deals damage in meels combat to the "
			  << target << " in the size " << _meleeAttackDamage 
			  << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if ((int)(this->_hitPoints - amount) < 0) {
		std::cout << "You killed me!!! Uuuuu!:(" << std::endl;
	}
	amount -= _armorDamageReduction;
	this->_hitPoints -= amount;
	if (this->_hitPoints > 0)
		std::cout << "You damaged me " << amount <<"hp. Ha! I am alive! :) And have "<< this->_hitPoints << "hp" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints >= amount) {
		this->_hitPoints += amount;
		if (this->_hitPoints > _maxHitPoints)
			this->_hitPoints = _maxHitPoints;
		this->_energyPoints -= amount;


		/*if (this->_hitPoints + amount > 100)
			amount = 100 - this->_hitPoints;
		this->_energyPoints -= amount;
		this->_hitPoints += amount;*/
		std::cout << "Regeneretd " << amount << "hp" << std::endl;
	}
	else
		std::cout << "I am full of energy! Give me way!!!" << this->_hitPoints << std::endl;
}

