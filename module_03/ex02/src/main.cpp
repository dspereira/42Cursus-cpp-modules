/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:45:55 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/27 12:33:54 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{	
	FragTrap	trap1("trap_1");
	FragTrap	trap2("trap_2");

	std::cout << std::endl;
	trap1.attack("trap_2");
	std::cout << std::endl;
	trap2.takeDamage(30);
	std::cout << std::endl;
	trap2.attack("trap_2");
	std::cout << std::endl;
	trap1.takeDamage(30);
	std::cout << std::endl;
	trap1.beRepaired(15);
	std::cout << std::endl;
	trap1.highFivesGuys();
	trap2.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
