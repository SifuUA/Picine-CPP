#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include <string>
# include <iostream>
# include "Contact.class.hpp"

class Phonebook {


private:
	static int id;

public:
	Contact listContacts [8];

	Phonebook(void);
	
	~Phonebook(void);

void addContact(Contact contact);

void search(void);

int getIndex();
};

#endif