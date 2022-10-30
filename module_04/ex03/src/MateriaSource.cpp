/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:10:14 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/30 16:07:52 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < NUM_MAT_CAN_LEARN; i++)
		this->materias[i] = NULL;
	//std::cout << "MateriaSource default constutor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	(*this) = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < NUM_MAT_CAN_LEARN; i++){
		if (this->materias[i])
			delete this->materias[i];
	}
	//std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other){
		for (int i = 0; i < NUM_MAT_CAN_LEARN; i++){
			if (this->materias[i]){
				delete this->materias[i];
				this->materias[i] = NULL;
			}
		}
		for (int i = 0; i < NUM_MAT_CAN_LEARN; i++){
			if (other.materias[i])
				this->materias[i] = other.materias[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	bool saved;

	saved = false;
	for (int i = 0; i < NUM_MAT_CAN_LEARN; i++){
		if (!this->materias[i]){
			this->materias[i] = m;
			saved = true;
			break;
		}
	}
	if (!saved)
		delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < NUM_MAT_CAN_LEARN; i++){
		if (this->materias[i] && !(this->materias[i]->getType().compare(type)))
			return (this->materias[i]->clone());
	}
	return (NULL);
}
