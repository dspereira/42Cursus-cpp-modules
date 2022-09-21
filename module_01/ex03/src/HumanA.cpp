/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:40:14 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/21 13:49:24 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon& weapon)
	: name(name), weapon(&weapon) {};

void HumanA::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks whit their " 
			  << this->weapon->getType() << std::endl;
}