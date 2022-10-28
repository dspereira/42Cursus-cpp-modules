/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:42:46 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/04 15:43:01 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << ": "
			  << "Default constructor called"
			  << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << ": "
			  << "Constructor called" 
			  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "ScavTrap " << this->_name << ": "
			  << "Copy operator called" << std::endl;
	(*this) = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << ": "
			  << "Destructor called" 
			  << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other){
		this->_name = other._name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "ScavTrap " << this->_name << ": "
			  << "Copy assignment operator called" << std::endl;
	return (*this);	
}

void ScavTrap::attack(const std::string& target)
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
	std::cout << "ScravTrap " << this->_name << msg << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << ": "
			  << "Is now in Gate keeper mode" 
			  << std::endl;
}