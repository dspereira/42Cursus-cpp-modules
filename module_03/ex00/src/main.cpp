/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:45:55 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/03 09:36:46 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{	
	ClapTrap	trap1("trap_1");
	ClapTrap	trap2("trap_2");

	std::cout << std::endl;
	trap1.attack("trap_2");
	std::cout << std::endl;
	trap2.takeDamage(5);
	std::cout << std::endl;
	trap2.attack("trap_2");
	std::cout << std::endl;
	trap1.takeDamage(2);
	std::cout << std::endl;
	trap1.beRepaired(3);
	std::cout << std::endl;
	trap1.attack("trap_2");
	std::cout << std::endl;
	trap2.takeDamage(10);
	std::cout << std::endl;
	trap2.beRepaired(10);
	std::cout << std::endl;
	trap2.attack("trap_1");
	std::cout << std::endl;
	return (0);
}
