#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		void		setFirstName(std::string firstName);
		std::string	getFirstName(void);
		void		setLastName(std::string lastName);
		std::string	getLastName(void);
		void		setNickname(std::string nickname);
		std::string	getNickname(void);
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getPhoneNumber(void);
		void		setDarkestSecret(std::string darkestSecret);
		std::string	getDarkestSecret(void);
        void        print(void);
};

#endif