#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact {
	
	public:
		std::string	firstName;
		std::string lastName;
		std::string nickName;
		std::string login;
		std::string postAddress;
		std::string	phoneNumber;
		std::string birthday;
		std::string favoriteMeal;
		std::string underwearColor;
		std::string darkestSecret;

	public:
		Contact(void);

		Contact(std::string p1, std::string p2, std::string p3, std::string p4,
				 std::string p5, std::string p6,  std::string p7, std::string p8,
				 std::string p9, std::string p10);

		~Contact(void);


		void toString(void);

		std::string getFirstName(void);

		std::string getLastName(void);

		std::string getNickname(void);
};
#endif
