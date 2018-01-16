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
	cout << "Contact is added." << endl;
	id++;
}

int Phonebook::getIndex() {
	return this->id;
}