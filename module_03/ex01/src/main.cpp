/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:45:55 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/03 12:49:28 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{	
	ScavTrap	trap1("trap_1");
	ScavTrap	trap2("trap_2");

	std::cout << std::endl;
	trap1.attack("trap_2");
	std::cout << std::endl;
	trap2.takeDamage(20);
	std::cout << std::endl;
	trap2.attack("trap_2");
	std::cout << std::endl;
	trap1.takeDamage(20);
	std::cout << std::endl;
	trap1.beRepaired(15);
	std::cout << std::endl;
	trap1.guardGate();
	trap2.guardGate();
	std::cout << std::endl;
	return (0);
}
