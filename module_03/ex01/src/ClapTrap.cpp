/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:05:21 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/03 10:13:58 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	name(""),
	hitPoits(10),
	energyPoints(10),
	attckDamage(0)
{
	std::cout << "ClapTrap " << this->name << ": "
			  << "Default constructor called" 
			  << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	name(name),
	hitPoits(10),
	energyPoints(10),
	attckDamage(0)
{
	std::cout << "ClapTrap " << this->name << ": "
			  << "Constructor called" 
			  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap " << this->name << ": "
			  << "Copy operator called" << std::endl;
	(*this) = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << ": "
			  << "Destructor called" 
			  << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap " << this->name << ": "
			  << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->name = other.name;
		this->hitPoits = other.hitPoits;
		this->energyPoints = other.energyPoints;
		this->attckDamage = other.attckDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::string msg;

	if (!this->energyPoints && !this->hitPoits)
		msg = " has no health or energy to attack";
	else if (!this->energyPoints)
		msg = " has no energy to attack";
	else if (!this->hitPoits)
		msg = " has no health to attack";
	else {
		msg = " attacks ";
		msg += target + ", causing " + convertNumtoString(this->attckDamage);
		msg += " points of damage!";
		this->energyPoints--;
	}
	std::cout << "ClapTrap " << this->name << msg << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoits)
		this->hitPoits = 0;
	else 
		this->hitPoits -= amount;
	std::cout << "ClapTrap " << this->name 
			  << " receives " << amount << " points of damage!. ";
	if (this->hitPoits)
		std::cout << "He has " << this->hitPoits << " health and " 
				  << this->energyPoints << " energy " << "points left" << std::endl;
	else
		std::cout << "He just died" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::string msg;

	if (!this->energyPoints && !this->hitPoits)
		msg = " has no health or energy to repair";
	else if (!this->energyPoints)
		msg = " has no energy to repair";
	else if (!this->hitPoits)
		msg = " has no health to repair";
	else {
		this->energyPoints--;
		this->hitPoits += amount;
		msg = " repaired ";
		msg += convertNumtoString(amount) + " points of healt. ";
		msg += "He has " + convertNumtoString(this->hitPoits) + " health and "; 
		msg += convertNumtoString(this->energyPoints) + " energy " + "points left";
		this->energyPoints--;
		this->hitPoits += amount;
	}
	std::cout << "ClapTrap " << this->name << msg << std::endl;
}