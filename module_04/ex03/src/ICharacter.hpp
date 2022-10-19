/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:17:34 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/19 12:08:13 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <string>

class AMateria;

class ICharacter
{
	public:
		ICharacter() {std::cout << "ICharacter default constutor called" << std::endl;}
		virtual ~ICharacter() {std::cout << "ICharacter default destructor called" << std::endl;}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
