# include <iostream>
# include "Contact.class.hpp"
# include "Phonebook.class.hpp"
# include <string>
# include <iomanip>


Contact adInfo() {
	Contact contact;

	std::cout << "Insert your First name: " << std::endl;
	std::cin >> contact.firstName;
	std::cout << "Insert your Last name: " << std::endl;
	std::cin >> contact.lastName;
	std::cout << "Insert your Nick name: " << std::endl;
	std::cin >> contact.nickName;
	std::cout << "Insert your Login: " << std::endl;
	std::cin >> contact.login;
	std::cout << "Insert your Post address: " << std::endl;
	std::cin >> contact.postAddress;
	std::cout << "Insert your Phone number: " << std::endl;
	std::cin >> contact.phoneNumber;
	std::cout << "Insert your Birthday: " << std::endl;
	std::cin >> contact.birthday;
	std::cout << "Insert your Favorite meal: " << std::endl;
	std::cin >> contact.favoriteMeal;
	std::cout << "Insert your Underwear color: " << std::endl;
	std::cin >> contact.underwearColor;
	std::cout << "Insert your Darkest secret: " << std::endl;
	std::cin >> contact.darkestSecret;

	return contact;
}

void	lookList(Contact listContacts [], int size) {
	int i = 0;
	int inf = 0;

	if (size > 0)
	{
		while (i < size) {
			std::cout << std::setw(10) << std::right << i + 1 << "|";

			if (listContacts[i].getFirstName().length() > 10) {
				std::string str = listContacts[i].getFirstName().substr(0, 9) + ".";
				std::cout << std::setw(10) << std::right << str << "|";
			}
			else
				std::cout << std::setw(10) << std::right << listContacts[i].getFirstName() << "|";

			if (listContacts[i].getLastName().length() > 10) {
				std::string str = listContacts[i].getLastName().substr(0, 9) + ".";
				std::cout << std::setw(10) << std::right << str << "|";
			}
			else
				std::cout << std::setw(10) << std::right << listContacts[i].getLastName() << "|";

			if (listContacts[i].getNickname().length() > 10) {
				std::string str = listContacts[i].getNickname().substr(0, 9) + ".";
				std::cout << std::setw(10) << std::right << str << "|" << std::endl;
			}
			else
				std::cout << std::setw(10) << std::right << listContacts[i].getNickname() << "|" << std::endl;
			i++;
		}
		while(1){
			std::cout << std::endl << "If you want more info, input number of contatc." << std::endl;
			std::cout << "For go back input 42. ";
			std::cin >> inf;
			std::cout << std::endl;
			if (inf > 0 && inf <= size) {
				listContacts[inf - 1].toString();
			}
			else if (inf == 42)
				return;
			else {
				std::cout << "Not such contact :(" << std::endl;
			}
		}

	}
	std::cout << "The phonebook while empty :(" << std::endl;
}


int		main() {
	std::string command;
	Phonebook phonebook;
	Contact contact;
	Contact contactList [8];

	while(1) {
		std::cout << "Please insert command (ADD, SEARCH or EXIT): ";
		std::cin >> command;
		if (command.compare("ADD") == 0)
		{
			if (phonebook.getIndex() == 8) {
				std::cout << "Sorry, but phonebook is full :(. You can use SEARCH or EXIT." << std::endl; 
				continue;
			}
			contact = adInfo();
			phonebook.addContact(contact);
		}
		else if (command.compare("SEARCH") == 0)
		{
			lookList(phonebook.listContacts, phonebook.getIndex());
		}
		else if (command.compare("EXIT") == 0)
			break ;
		else
		{
			std::cout << "Your command is not valid :(, please look at insert example." << std::endl;
		}
	}
}
