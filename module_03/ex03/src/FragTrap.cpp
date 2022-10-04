/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:18:16 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/04 18:00:51 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hitPoits = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->_name << ": "
			  << "Default constructor called"
			  << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hitPoits = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->_name << ": "
			  << "Constructor called"
			  << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap " << this->_name << ": "
			  << "Copy operator called" << std::endl;
	(*this) = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << ": "
			  << "Destructor called" 
			  << std::endl; 
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other){
		this->_name = other._name;
		this->hitPoits = other.hitPoits;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "FragTrap " << this->_name << ": "
			  << "Copy assignment operator called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": "
			  << "Give me a high five guys"
			  << std::endl;
}
