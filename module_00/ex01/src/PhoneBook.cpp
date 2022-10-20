/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:02:57 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/13 14:55:33 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook():
	numberOfContacts(0),
	numberOfContactsSaved(0)
{}

PhoneBook::~PhoneBook(){}

void PhoneBook::addNewContact(const Contact& contact)
{
	if (this->numberOfContacts < MAX_NUM_CONTACTS)
		(this->numberOfContacts)++;
	contacts[this->numberOfContactsSaved] = contact;
	(this->numberOfContactsSaved)++;
	if (this->numberOfContactsSaved >= MAX_NUM_CONTACTS)
		this->numberOfContactsSaved = 0;
}

std::string PhoneBook::getTruncatedStr(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return str;
}

void PhoneBook::printAllContacts(void)
{
	Contact c;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|"
			  << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << "|"
			  << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for(int i = 0; i < this->numberOfContacts; i++)
	{
		c = contacts[i];
		std::cout << "|"
				  << std::setw(10) << i + 1 << "|"
				  << std::setw(10) << getTruncatedStr(c.getFirstName()) << "|"
				  << std::setw(10) << getTruncatedStr(c.getLastName()) << "|"
				  << std::setw(10) << getTruncatedStr(c.getNickname()) << "|"
				  << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
}

void PhoneBook::printContactByIndex(int index)
{
	if (index >=0 && index < getNumberOfContacts())
		this->contacts[index].print();
}

int PhoneBook::getNumberOfContacts(void)
{
	return (this->numberOfContacts);
}