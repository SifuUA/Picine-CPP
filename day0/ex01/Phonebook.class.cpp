# include <iostream>
# include "Phonebook.class.hpp"
# include "Contact.class.hpp"
# include <string>

int Phonebook::id = 0;

Phonebook::Phonebook() {
}

Phonebook::~Phonebook(void) {
}

void Phonebook::addContact(Contact contact) {
	this->listContacts[id] = contact;
	std::cout << "Contact is added." << std::endl;
	id++;
}

int Phonebook::getIndex() {
	return this->id;
}
