/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:37:20 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/16 12:14:24 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserInterface.hpp"

void UserInterface::execute(void)
{
	std::string	input;
	int			inputInt;
	
	std::cout << "Write an option (ADD, SEARCH or EXIT): ";
	input = getInput();
	//system("clear");
	if (!input.compare("EXIT"))
		exit(0);
	else if (!input.compare("ADD"))
	{
		std::cout << "Fill in the required fields" << std::endl;
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
		if (!phoneBook.getNumberOfContacts())
			std::cout << "The list of contacts is empty" << std::endl;
		else
		{
			phoneBook.printAllContacts();
			std::cout << "select the index: ";
			input = getInput();
			if (input.length() > 1)
				std::cout << "Invalid index" << std::endl;
			else
			{
				inputInt = convertStringToInt(input);
				if (inputInt > 0 && inputInt <= phoneBook.getNumberOfContacts())
				{
					phoneBook.printContactByIndex(inputInt - 1);
					std::cout << std::endl;
				}
				else
					std::cout << "Invalid index" << std::endl;
			}
		}
	}
	else
		std::cout << "The typed option is not valid: " << input << std::endl;
}

std::string UserInterface::getInput(void)
{
	std::string input;

	getline(std::cin >> std::ws, input);
	rightTrim(input);
	return (input);
}
