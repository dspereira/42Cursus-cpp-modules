/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:07:02 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/09 17:26:25 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

std::string	Contact::getFirstName(void){
	return (this->firstName);
}

void Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

std::string	Contact::getLastName(void){
	return (this->lastName);
}

void Contact::setNickname(std::string nickname){
	this->nickname = nickname;
}

std::string Contact::getNickname(void){
	return (this->nickname);
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getPhoneNumber(void){
	return (this->phoneNumber);
}

void		Contact::setDarkestSecret(std::string darkestSecret){
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getDarkestSecret(void){
	return (this->darkestSecret);
}

void	Contact::print(void)
{
	std::cout << this->getFirstName() << std::endl;
	std::cout << this->getLastName() << std::endl;
	std::cout << this->getNickname() << std::endl;
	std::cout << this->getPhoneNumber() << std::endl;
	std::cout << this->getDarkestSecret() << std::endl;		
}
