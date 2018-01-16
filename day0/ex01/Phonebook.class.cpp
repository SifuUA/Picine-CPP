# include <iostream>
# include "Phonebook.class.hpp"
# include "Contact.class.hpp"
#include <string>
using namespace std;

int Phonebook::id = 0;

Phonebook::Phonebook() {
}

Phonebook::~Phonebook(void) {
}

void Phonebook::addContact(Contact contact) {
	this->listContacts[id] = contact;
	cout << "Contact with this is info is added." << endl;
	this->listContacts[id].toString();
	id++;
}

int Phonebook::getId() {
	return this->id;
}