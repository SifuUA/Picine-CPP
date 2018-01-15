#include <iostream>
# include <string>
#include "Contact.class.hpp"

Contact::Contact(std::string p1, std::string p2, std::string p3, std::string p4,
				 std::string p5, std::string p6,  std::string p7, std::string p8,
				 std::string p9, std::string p10) {
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
}

Contact::~Contact(void) {
}

void Contact::toString() {
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nick name: " << this->nickName << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Post address: " << this->postAddress << std::endl;
	std::cout << "PhoneNumber: " << this->phoneNumber << std::endl;
	std::cout << "Birthday: " << this->birthday << std::endl;
	std::cout << "Favorite meal: " << this->favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->underwearColor << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}

