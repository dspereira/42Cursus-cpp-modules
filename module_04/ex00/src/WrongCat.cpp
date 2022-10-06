/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:42:18 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/06 14:41:19 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wrong Cat";
	std::cout << "WrongCat default constutor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal()
{
	std::cout << "WrongCat copy operator called" << std::endl;
	(*this) = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other){
		this->type = other.getType();
	}
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return (*this);
}

std::string WrongCat::getType() const
{
	return (this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound " << std::endl;
}
