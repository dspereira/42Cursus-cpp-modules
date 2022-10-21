/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:13:55 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/20 16:22:37 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name("")
{
	std::cout << this->name << ": default constructor" << std::endl;
}

Zombie::Zombie(std::string name): name(name)
{
	std::cout << this->name << ": constructor" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << this->name << ": destructor" << std::endl;
}

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
