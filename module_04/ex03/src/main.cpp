/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:06:21 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/19 16:59:50 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main (void)
{
	std::cout << std::endl;
	Character p1("player_1");
	std::cout << std::endl;
	Character p2("player_2");
	std::cout << std::endl;

	p1.equip(new Ice);
	p2.equip(new Cure);
	p1.equip(new Cure);
	p2.equip(new Cure);
	p1.equip(new Ice);
	p2.equip(new Cure);

	p1.unequip(0);
	p2.equip(0);

	p1.equip(new Cure);
	p2.equip(new Cure);

	p1.use(0, p2);
	std::cout << std::endl;
	p2.use(0, p1);
	std::cout << std::endl;
	//p1 = p2;
	p1.use(0, p2);
	std::cout << std::endl;
	p2.use(0, p1);
	std::cout << std::endl;

	return (0);
}