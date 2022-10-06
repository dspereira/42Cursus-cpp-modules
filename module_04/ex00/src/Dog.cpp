/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:04:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/06 14:12:30 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constutor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal()
{
 	std::cout << "Dog copy operator called" << std::endl;
	(*this) = other; 
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other){
		this->type = other.getType();
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dogs don’t meow" << std::endl;
}
