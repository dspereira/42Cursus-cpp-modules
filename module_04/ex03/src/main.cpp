/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:06:21 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/30 18:50:46 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void test1(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
}

void test2(void)
{
	Character p1("player_1");
	Character p2("player_2");
	IMateriaSource* src = new MateriaSource();

	for(int i = 0; i < 10; i++)
	{
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		if (i % 2 == 0) {
			p1.equip(new Ice);
			p2.equip(new Ice);
		}
		else {
			p1.equip(new Cure);
			p2.equip(new Cure);
		}
	}

	std::cout << "Just equip players and use" << std::endl;
	p1.use(0, p2);
	p2.use(0, p1);
	p1.use(1, p2);
	p2.use(1, p1);

	std::cout << std::endl;

	for(int i = 0; i < 10; i++)
	{
		p1.unequip(i);
		p2.unequip(i);
	}

	for(int i = 0; i < 10; i++)
	{
		if (i % 2 == 0) {
			p1.equip(src->createMateria("ice"));
			p2.equip(src->createMateria("ice"));
		}
		else {
			p1.equip(src->createMateria("cure"));
			p2.equip(src->createMateria("cure"));
		}
	}

	std::cout << "Just unequip and equip again players and use" << std::endl;
	p1.use(2, p2);
	p2.use(2, p1);
	p1.use(3, p2);
	p2.use(3, p1);
	p1.use(4, p2);
	p2.unequip(0);
	p2.use(0, p1);
	std::cout << std::endl;

	std::cout << "Copy players and use" << std::endl;

	Character p3(p1);
	Character p4;

	p4 = p2;
	p2 = p3;
	p2.use(2, p1);
	p3.use(2, p1);
	p4.use(2, p1);

	delete src;
}

int main (void)
{
	test1();
	std::cout << std::endl;
	test2();

	return (0);
}