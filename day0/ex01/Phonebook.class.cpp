#include <iostream>
# include "Phonebook.class.hpp"
# include "Contact.class.hpp"

int Phonebook::id = 0;

Phonebook::Phonebook() {
}

Phonebook::~Phonebook(void) {
}

/*static int Phonebook::nextId() {
	return int Phonebook::id++;
}*/

void Phonebook::addContact(Contact contact) {
	if(id < 8) {
		std::cout << "AAAAAA" << std::endl;
		id++;
		std::cout << id;
	}
}