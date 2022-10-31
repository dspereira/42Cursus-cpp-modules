/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:51:05 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/08 10:09:37 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog& operator=(const Dog& other);
		void makeSound() const;
		void setIdea(std::string idea);
		void showIdea(int index) const;
};

#endif
