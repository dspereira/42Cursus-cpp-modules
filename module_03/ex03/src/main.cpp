/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:45:55 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/04 18:50:23 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{	
	DiamondTrap trap1("trap1");
	DiamondTrap trap2("trap2");

	std::cout << std::endl; 
	trap1.attack("trap2");
	trap2.takeDamage(20);
	trap2.beRepaired(25);
	trap2.attack("trap1");
	trap1.takeDamage(200);
	trap1.attack("trap2");
	trap1.guardGate();
	trap1.highFivesGuys();
	trap1.whoAmI();
	trap2.whoAmI();
	std::cout << std::endl;
	
	return (0);
}
