# include <iostream>
# include "Contact.class.hpp"
# include "Phonebook.class.hpp"
# include <string>
# include <iomanip>
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

void	lookList(Contact listContacts [], int size) {
	int i = 0;
	int inf = 0;

	if (size > 0)
	{
		while (i < size) {
			cout << setw(10) << right << i + 1 << "|";

			if (listContacts[i].getFirstName().length() > 10) {
				string str = listContacts[i].getFirstName().substr(0, 9) + ".";
				cout << setw(10) << right << str << "|";
			}
			else
				cout << setw(10) << right << listContacts[i].getFirstName() << "|";

			if (listContacts[i].getLastName().length() > 10) {
				string str = listContacts[i].getLastName().substr(0, 9) + ".";
				cout << setw(10) << right << str << "|";
			}
			else
				cout << setw(10) << right << listContacts[i].getLastName() << "|";

			if (listContacts[i].getNickname().length() > 10) {
				string str = listContacts[i].getNickname().substr(0, 9) + ".";
				cout << setw(10) << right << str << "|" << endl;
			}
			else
				cout << setw(10) << right << listContacts[i].getNickname() << "|" << endl;
			i++;
		}
		while(1){
			cout << endl << "If you want more info, input number of contatc." << endl;
			cout << "For go back input 42. ";
			cin >> inf;
			cout << endl;
			if (inf > 0 && inf <= size) {
				listContacts[inf - 1].toString();
			}
			else if (inf == 42)
				return;
			else {
				cout << "Not such contact :(" << endl;
			}
		}

	}
	cout << "The phonebook while empty :(" << endl;
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
			if (phonebook.getIndex() == 8) {
				cout << "Sorry, but phonebook is full :(. You can use SEARCH or EXIT." << endl; 
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
			cout << "Your command is not valid :(, please look at insert example." << endl;
		}
	}
}