/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:02:26 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/09 19:14:51 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USERINTERFACE_HPP
#define USERINTERFACE_HPP

#include <iostream>
#include "PhoneBook.hpp"

class UserInterface
{
	private:
		PhoneBook	phoneBook;
		Contact		contact;
		
		std::string	getInput(void);

	public:
		void        execute(void);
};

#endif