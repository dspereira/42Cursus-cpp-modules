/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:02:26 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/19 11:48:23 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USERINTERFACE_HPP
#define USERINTERFACE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"

class UserInterface
{
	private:
		PhoneBook	phoneBook;
		
		void		addContact(void);
		void		search(void);
		std::string getInput(std::string msg);
		void		putString(std::string msg);

	public:
		void        execute(void);
};

#endif