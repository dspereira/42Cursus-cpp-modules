/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:37:20 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/19 14:55:38 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserInterface.hpp"

UserInterface::~UserInterface() {}

void UserInterface::execute(void)
{
	std::string	input;

	while (1)
	{
		input = getInput("Write an option (ADD, SEARCH or EXIT): ");
		system("clear");
		if (!input.compare("EXIT"))
			break;
		else if (!input.compare("ADD"))
			addContact();
		else if (!input.compare("SEARCH"))
			search();
		else
			std::cout << "The typed option is not valid: " << input << std::endl;
	}
}

void UserInterface::addContact(void)
{
	putString("Fill in the required fields");
	contact.setFirstName(getInput("First name: "));
	contact.setLastName(getInput("Last name: "));
	contact.setNickname(getInput("Nikname: "));
	contact.setPhoneNumber(getInput("Phone number: "));
	contact.setDarkestSecret(getInput("Darkest secret: "));
	this->phoneBook.addNewContact(contact);
}

void UserInterface::search(void)
{
	std::string	input;
	int			inputInt;

	if (!phoneBook.getNumberOfContacts())
		putString("The list of contacts is empty");
	else
	{
		phoneBook.printAllContacts();
		input = getInput("select the index: ");
		if (input.length() > 1)
			putString("Invalid index");
		else
		{
			inputInt = convertStringToInt(input);
			if (inputInt > 0 && inputInt <= phoneBook.getNumberOfContacts())
			{
				phoneBook.printContactByIndex(inputInt - 1);
				std::cout << std::endl;
			}
			else
				putString("Invalid index");
		}
	}
}

std::string UserInterface::getInput(std::string msg)
{
	std::string input;

	std::cout << msg;
	getline(std::cin >> std::ws, input);
	rightTrim(input);
	return (input);
}

void UserInterface::putString(std::string msg)
{
	std::cout << msg << std::endl;
}
