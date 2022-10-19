/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:20:26 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/19 16:59:22 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name(""), nbMateriasDroped(0)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->materiaSlot[i] = NULL;
	std::cout << "Character default constutor called" << std::endl;
}

Character::Character(std::string name): _name(name), nbMateriasDroped(0)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->materiaSlot[i] = NULL;
	std::cout << "Character constutor called" << std::endl;
}

Character::Character(const Character& other)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->materiaSlot[i] = NULL;
	(*this) = other;
}

Character::~Character()
{
	deleteMaterias();
	std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other){
		deleteMaterias();
		for (int i = 0; i < INVENTORY_SIZE; i++){
			if (other.materiaSlot[i])
				this->materiaSlot[i] = other.materiaSlot[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < INVENTORY_SIZE; i++){
		if (!this->materiaSlot[i]){
			this->materiaSlot[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INVENTORY_SIZE && this->nbMateriasDroped < MAX_MATERIA_DROP){
		if (this->materiaSlot[idx])
		{
			this->materiaDroped[this->nbMateriasDroped] = this->materiaSlot[idx];
			this->nbMateriasDroped++;
			this->materiaSlot[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INVENTORY_SIZE){
		if (this->materiaSlot[idx])
			this->materiaSlot[idx]->use(target);
	}
}

void Character::deleteMaterias(void)
{
	for (int i = 0; i < this->nbMateriasDroped; i++){
		delete this->materiaDroped[i];
		this->nbMateriasDroped = 0;
	}
	for (int i = 0; i < INVENTORY_SIZE; i++){
		if (this->materiaSlot[i]){
			delete this->materiaSlot[i];
			this->materiaSlot[i] = NULL;
		}
	}	
}