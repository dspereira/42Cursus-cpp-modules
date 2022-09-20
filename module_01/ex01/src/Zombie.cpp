/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:13:55 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/20 16:17:52 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	this->name = "not defined";
}

Zombie::Zombie(std::string name): name(name) {};

Zombie::~Zombie(void){
	std::cout << this->name << ": destructor" << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
