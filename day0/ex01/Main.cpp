# include <iostream>
# include "Contact.class.hpp"
# include "Phonebook.class.hpp"
# include <string>
using namespace std;


Contact adInfo() {
	Contact contact;

	cout << "Insert your First name: " << endl;
	cin >> contact.firstName;
	cout << "Insert your Last name: " << endl;
	cin >> contact.lastName;
	cout << "Insert your Nick name: " << endl;
	cin >> contact.nickName;
	cout << "Insert your Login: " << endl;
	cin >> contact.login;
	cout << "Insert your Post address: " << endl;
	cin >> contact.postAddress;
	cout << "Insert your Phone number: " << endl;
	cin >> contact.phoneNumber;
	cout << "Insert your Birthday: " << endl;
	cin >> contact.birthday;
	cout << "Insert your Favorite meal: " << endl;
	cin >> contact.favoriteMeal;
	cout << "Insert your Underwear color: " << endl;
	cin >> contact.underwearColor;
	cout << "Insert your Darkest secret: " << endl;
	cin >> contact.darkestSecret;

	return contact;
}

void	lookList(Contact array []) {

}


int		main() {
	string command;
	Phonebook phonebook;
	Contact contact;
	Contact contactList [8];

	while(1) {
		cout << "Please insert command (ADD, SEARCH or EXIT): ";
		cin >> command;
		if (command.compare("ADD") == 0)
		{
			if (phonebook.getId() == 8) {
				cout << "Sorry, but phonebook is full. You can use SEARCH or EXIT." << endl;
				continue;
			}
			contact = adInfo();
			phonebook.addContact(contact);
			cout << phonebook.getId() << endl;
		}
		else if (command.compare("SEARCH") == 0)
		{
			lookList(phonebook.listContacts);
			cout << "SEARCH";
		}
		else if (command.compare("EXIT") == 0)
			break ;
		else
		{
			cout << "Your command is not valid, please look at insert example." << endl;
		}
	}
}