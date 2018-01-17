# include "Pony.hpp"
# include <iostream>
# include <string>

void	ponyOnTheHeap() {
	Pony* pony2 = new Pony("ZorkaHeap", 10);
	std::cout << "Dynamic created new pony with name " << pony2->getName() 
				<< " and age " << pony2->getAge() << std::endl; 
	delete pony2;
	std::cout << "pony was deleted" << std::endl;
}

void	ponyOnTheStack() {
	Pony pony1 = Pony("ZorkaStack", 5);
	std::cout << "Allocation on stack pony with name " << pony1.getName() 
				<< " and age " << pony1.getAge() << std::endl; 
}

int main(void) {
	std::cout << "Call methode ponyOnTheStack() ..." << std::endl;
	ponyOnTheStack();
	std::cout << "Call methode ponyOnTheHeap() ..." << std::endl;
	ponyOnTheHeap();
	std::cout << "Program finished" << std::endl;
}