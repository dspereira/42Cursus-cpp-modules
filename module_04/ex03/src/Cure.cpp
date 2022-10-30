/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:22:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/30 18:41:58 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    //std::cout << "Cure default constutor called" << std::endl;
}

Cure::Cure(const Cure& other): AMateria("cure")
{
	*this = other;
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	(void) other;
	return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " 
              << target.getName() << "'s wounds *" 
              << std::endl;
}
