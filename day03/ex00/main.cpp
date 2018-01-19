# include "FragTrap.hpp"

int main(void) {
	FragTrap fragTrap("Killer");
	FragTrap::rangedAttack("Bad boy");
	FragTrap::meleeAttack("Bad boy");
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(10);
	fragTrap.takeDamage(30);
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(90);
	fragTrap.beRepaired(30);
	fragTrap.beRepaired(30);
	fragTrap.beRepaired(30);
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(90);





}