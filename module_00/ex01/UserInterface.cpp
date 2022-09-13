/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:37:20 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/13 14:38:27 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserInterface.hpp"

void UserInterface::execute(void)
{
	std::string	input;
	int			inputInt;
	
	input = getInput();
	if (!input.compare("EXIT"))
		exit(0);
	else if (!input.compare("ADD"))
	{
		std::cout << "First name: ";
		contact.setFirstName(getInput());
		std::cout << "Last name: ";
		contact.setLastName(getInput());
		std::cout << "Nikname: ";
		contact.setNickname(getInput());
		std::cout << "Phone number: ";
		contact.setPhoneNumber(getInput());
		std::cout << "Darkest secret: ";
		contact.setDarkestSecret(getInput());
		phoneBook.addNewContact(contact);
	}
	else if (!input.compare("SEARCH"))
	{
		phoneBook.printAllContacts();
		std::cout << "select the index: ";
		input = getInput();
		if (input.length() > 1)
			std::cout << "invalid index" << std::endl;
		else
		{
			inputInt = convertStringToInt(input);
			if (inputInt > 0 && inputInt <= phoneBook.getNumberOfContacts())
				phoneBook.printContactByIndex(inputInt - 1);
			else
				std::cout << "invalid index" << std::endl;
		}
	}
}

std::string UserInterface::getInput(void)
{
	std::string input;

	getline(std::cin >> std::ws, input);
	return (input);
}
