/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:13:04 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/19 15:47:08 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

#define MAX_MATERIA_DROP 100
#define INVENTORY_SIZE 4

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*materiaSlot[INVENTORY_SIZE];
		AMateria	*materiaDroped[MAX_MATERIA_DROP];
		int			nbMateriasDroped;
		void		deleteMaterias(void);

	public:
		Character();
		Character(std::string name);
		Character(const Character& other);
		~Character();
		Character& operator=(const Character& other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
