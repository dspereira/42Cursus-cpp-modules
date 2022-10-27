/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:30:20 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/27 17:33:18 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain()
{
	std::cout << "Brain default constutor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy operator called" << std::endl;
	(*this) = other;	
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other){
		for(int i = 0; i < SIZE_IDEAS; i++)
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);	
}

void Brain::addNewIdea(const std::string& idea)
{
	for (int i = 0; i < SIZE_IDEAS; i++){
		if (this->ideas[i].empty()){
			this->ideas[i] = idea;
			return ;
		}
	}
	std::cout << "The brain is full of ideas can't store no more" << std::endl;
}

void Brain::addNewIdea(const std::string& idea, int index)
{
	if (index < 0 || index > 99)
		std::cout << "Error: the index must be between 0 and 99" << std::endl;
	else
		this->ideas[index] = idea;
}

void Brain::showIdea(int index)
{
	if (index < 0 || index > 99)
		std::cout << "Error: the index must be between 0 and 99" << std::endl;
	else
		std::cout << this->ideas[index] << std::endl;
}
