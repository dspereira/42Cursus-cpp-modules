/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:56:36 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/27 17:22:38 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constutor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal()
{
 	std::cout << "Cat copy operator called" << std::endl;
	(*this) = other; 
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other){
		this->type = other.getType();
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "cats don't bark" << std::endl;
}
