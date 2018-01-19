#ifndef FRAG_TAP_H
# define FRAG_TAP_H
	
# include <iostream>
# include <string>

class FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();

		FragTrap &operator=(FragTrap const &rhs);

		static void rangedAttack(std::string const &target);

		static void meleeAttack(std::string const &target);

		void takeDamage(unsigned int amount);

		void beRepaired(unsigned int amount);

		void vaulthunter_dot_exe(std::string const &target);

		std::string getName(void) const;

	private:
		static const int	_level;
		static const int	_maxHitPoints;
		static const int 	_maxEnergyPoints;
		static const int 	_meleeAttackDamage;
		static const int	_rangedAttackDamage;
		static const int	_armorDamageReduction;
		int 				_hitPoints;
		int 				_energyPoints;
		std::string 		_name;
};		
#endif