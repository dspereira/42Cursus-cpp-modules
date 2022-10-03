/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:18:16 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/03 15:17:19 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap " << this->_name << ": "
			  << "Default constructor called"
			  << std::endl; 
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hitPoits = 100;
	this->energyPoints = 100;
	this->attckDamage = 30;
	std::cout << "FragTrap " << this->_name << ": "
			  << "Constructor called"
			  << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << ": "
			  << "Destructor called" 
			  << std::endl;   
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": "
			  << "Give me a high five guys"
			  << std::endl;
}
