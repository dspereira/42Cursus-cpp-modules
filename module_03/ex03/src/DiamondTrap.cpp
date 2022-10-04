/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:39:33 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/04 16:32:58 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("")
{
	this->hitPoits = FragTrap::hitPoits;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->_name << ": "
			  << "Default constructor called"
			  << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	_name(name)
{
	this->hitPoits = FragTrap::hitPoits;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->_name << ": "
			  << "Constructor called"
			  << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):
	ClapTrap(other._name + "_clap_name"),
	ScavTrap(other._name),
	FragTrap(other._name),
	_name(other._name)
{
	std::cout << "DiamondTrap " << this->_name << ": "
			  << "Copy operator called" << std::endl;
	(*this) = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << ": "
			  << "Destructor called"
			  << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other){
		this->_name = other._name;
		this->hitPoits = other.hitPoits;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "DiamondTrap " << this->_name << ": "
			  << "Copy assignment operator called" << std::endl;
	return (*this);		
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name: " << this->ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
}
