/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:07:23 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/30 16:02:21 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define NUM_MAT_CAN_LEARN 4

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*materias[NUM_MAT_CAN_LEARN];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource& other);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};