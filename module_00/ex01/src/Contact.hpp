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
					~Contact();
		void		setFirstName(std::string firstName);
		std::string	getFirstName(void) const;
		void		setLastName(std::string lastName);
		std::string	getLastName(void) const;
		void		setNickname(std::string nickname);
		std::string	getNickname(void) const;
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getPhoneNumber(void) const;
		void		setDarkestSecret(std::string darkestSecret);
		std::string	getDarkestSecret(void) const;
        void        print(void) const;
};

#endif