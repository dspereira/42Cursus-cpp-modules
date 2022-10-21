/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:13:07 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/21 12:28:50 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::Weapon(std::string type): type(type){}

const std::string& Weapon::getType(void){
	return (this->type);
}

void Weapon::setType(std::string type){
	this->type = type;
}