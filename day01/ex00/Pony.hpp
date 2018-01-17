#ifndef PONY_H
# define PONY_H
# include <iostream>
# include  <string>

class Pony
{
	private:
		std::string _name;
		int _age;

	public:
		Pony(std::string name, int age);
		~Pony(void);
		std::string getName(void);
		int getAge(void);
};
#endif