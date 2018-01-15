# include <iostream>
# include "Contact.class.hpp"
# include "Phonebook.class.hpp"

int		main() {
	Contact contact("aa", "bb", "cc", "dd", "ee", "111", "qq", "rr", "tt", "yy");
	contact.toString();
	Phonebook phonebook;
	phonebook.addContact(contact);
	phonebook.addContact(contact);
	phonebook.addContact(contact);
	phonebook.addContact(contact);
}
