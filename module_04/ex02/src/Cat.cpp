/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:56:36 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/08 17:32:11 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): brain(new Brain)
{
    this->type = "Cat";
    std::cout << "Cat default constutor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(), brain(new Brain)
{
 	std::cout << "Cat copy operator called" << std::endl;
	(*this) = other;
}

Cat::~Cat()
{
	delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other){
		this->type = other.getType();
		*(this->brain) = *(other.brain);
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cats don't bark" << std::endl;
}

void Cat::setIdea(std::string idea)
{
	this->brain->addNewIdea(idea);
}

void Cat::showIdea(int index) const
{
	this->brain->showIdea(index);
}