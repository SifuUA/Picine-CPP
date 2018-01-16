#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>
using namespace std;

class Contact {
	
	public:
		string	firstName;
		string lastName;
		string nickName;
		string login;
		string postAddress;
		string	phoneNumber;
		string birthday;
		string favoriteMeal;
		string underwearColor;
		string darkestSecret;

	public:
		Contact(void);

		Contact(std::string p1, std::string p2, std::string p3, std::string p4,
				 std::string p5, std::string p6,  std::string p7, std::string p8,
				 std::string p9, std::string p10);

		~Contact(void);


		void toString(void);

		string getFirstName(void);

		string getLastName(void);

		string getNickname(void);
};
#endif
