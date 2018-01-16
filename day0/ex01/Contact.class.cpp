# include <iostream>
# include <string>
# include "Contact.class.hpp"
using namespace std;


Contact::Contact(string p1, string p2, string p3, string p4,
				 string p5, string p6,  string p7, string p8,
				 string p9, string p10) {
	this->firstName = p1;
	this->lastName = p2;
	this->nickName = p3;
	this->login = p4;
	this->postAddress = p5;
	this->phoneNumber = p6;
	this->birthday = p7;
	this->favoriteMeal = p8;
	this->underwearColor = p9;
	this->darkestSecret = p10;
	return;
}

void Contact::toString() {
	cout << "First name: " << this->firstName << std::endl;
	cout << "Last name: " << this->lastName << std::endl;
	cout << "Nick name: " << this->nickName << std::endl;
	cout << "Login: " << this->login << std::endl;
	cout << "Post address: " << this->postAddress << std::endl;
	cout << "PhoneNumber: " << this->phoneNumber << std::endl;
	cout << "Birthday: " << this->birthday << std::endl;
	cout << "Favorite meal: " << this->favoriteMeal << std::endl;
	cout << "Underwear color: " << this->underwearColor << std::endl;
	cout << "Darkest secret: " << this->darkestSecret << std::endl;
}

string Contact::getFirstName(void) {
	return this->firstName;
}

string Contact::getLastName(void) {
	return this->lastName;
}

string Contact::getNickname(void) {
	return this->nickName;
}


Contact::Contact(void){
	return;
}

Contact::~Contact(void) {
	return;
}



