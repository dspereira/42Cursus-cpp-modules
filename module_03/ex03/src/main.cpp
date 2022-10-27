/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:45:55 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/27 16:09:46 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{	
	DiamondTrap trap("trap1");

	std::cout << std::endl; 
	trap.attack("trap");
	trap.takeDamage(20);
	trap.beRepaired(25);
	std::cout << std::endl;
	trap.guardGate();
	trap.highFivesGuys();
	trap.whoAmI();	
	std::cout << std::endl;
	
	return (0);
}
