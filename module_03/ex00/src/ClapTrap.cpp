/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:05:21 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/04 14:54:09 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_name(""),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name),
	hitPoints(10),
	energyPoints(10),
	attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy operator called" << std::endl;
	(*this) = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_name = other._name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::string msg;

	if (!this->energyPoints && !this->hitPoints)
		msg = " has no health or energy to attack";
	else if (!this->energyPoints)
		msg = " has no energy to attack";
	else if (!this->hitPoints)
		msg = " has no health to attack";
	else {
		msg = " attacks ";
		msg += target + ", causing " + convertNumtoString(this->attackDamage);
		msg += " points of damage!";
		this->energyPoints--;
	}
	std::cout << "ClapTrap " << this->_name << msg << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoints)
		this->hitPoints = 0;
	else 
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name 
			  << " receives " << amount << " points of damage!. ";
	if (this->hitPoints)
		std::cout << "He has " << this->hitPoints << " health and " 
				  << this->energyPoints << " energy " << "points left" << std::endl;
	else
		std::cout << "He just died" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::string msg;

	if (!this->energyPoints && !this->hitPoints)
		msg = " has no health or energy to repair";
	else if (!this->energyPoints)
		msg = " has no energy to repair";
	else if (!this->hitPoints)
		msg = " has no health to repair";
	else {
		this->energyPoints--;
		this->hitPoints += amount;
		msg = " repaired ";
		msg += convertNumtoString(amount) + " points of healt. ";
		msg += "He has " + convertNumtoString(this->hitPoints) + " health and "; 
		msg += convertNumtoString(this->energyPoints) + " energy " + "points left";
		this->energyPoints--;
		this->hitPoints += amount;
	}
	std::cout << "ClapTrap " << this->_name << msg << std::endl;
}
