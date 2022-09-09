/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:02:57 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/09 19:14:22 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void PhoneBook::addNewContact(Contact contact)
{
	int index;

	index = getNumberOfContacts() + 1;
	setNumberOfContacts(index);
	contacts[index - 1] = contact;	
}

void PhoneBook::setNumberOfContacts(int numberOfContacts)
{
	if (numberOfContacts < MAX_NUM_CONTACTS)
		this->numberOfContacts = numberOfContacts;
}
int PhoneBook::getNumberOfContacts(void){
	return (this->numberOfContacts);
}