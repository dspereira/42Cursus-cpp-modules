/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:52:15 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/21 13:51:51 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name): 
    name(name), 
    weapon(0) {}

void HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks whit their " 
			  << this->weapon->getType() << std::endl;
}
