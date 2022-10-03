/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:42:46 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/03 14:30:14 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap " << this->name << ": "
			  << "Default constructor called"
			  << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->hitPoits = 100;
    this->energyPoints = 50;
    this->attckDamage = 20;
	std::cout << "ScavTrap " << this->name << ": "
			  << "Constructor called" 
			  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << ": "
			  << "Destructor called" 
			  << std::endl;
}

void ScavTrap::attack(const std::string& target)
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
	std::cout << "ScravTrap " << this->name << msg << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << ": "
			  << "Is now in Gate keeper mode" 
			  << std::endl;
}