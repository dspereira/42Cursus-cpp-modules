/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:07:02 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/12 17:36:38 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

std::string	Contact::getFirstName(void) const {
	return (this->firstName);
}

void Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

std::string	Contact::getLastName(void) const {
	return (this->lastName);
}

void Contact::setNickname(std::string nickname){
	this->nickname = nickname;
}

std::string Contact::getNickname(void) const {
	return (this->nickname);
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->phoneNumber);
}

void		Contact::setDarkestSecret(std::string darkestSecret){
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->darkestSecret);
}
/*
void	Contact::print(void) const
{
	std::cout << "+++++++++++++++++++++++++++++\n" << std::endl;
	std::cout << this->getFirstName() << std::endl;
	std::cout << this->getLastName() << std::endl;
	std::cout << this->getNickname() << std::endl;
	std::cout << this->getPhoneNumber() << std::endl;
	std::cout << this->getDarkestSecret() << std::endl;		
}
*/

void	Contact::print(void) const
{
	std::cout << "+++++++++++++++++++++++++++++\n" << std::endl;
	std::cout << this->getFirstName();
	std::cout << this->getLastName();
	std::cout << this->getNickname();
	std::cout << this->getPhoneNumber();
	std::cout << this->getDarkestSecret();
	std::cout << std::endl;		
}
