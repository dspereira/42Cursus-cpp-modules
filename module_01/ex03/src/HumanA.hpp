/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:32:49 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/21 14:05:01 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;

	public:
		HumanA(std::string	name, Weapon& weapon);
		void setWeapon(Weapon& weapon);
		void attack(void);
};

#endif