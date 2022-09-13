/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:24:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/13 13:25:16 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// g++ main.cpp UserInterface.cpp UserInterface.hpp PhoneBook.cpp PhoneBook.hpp Contact.cpp Contact.hpp utils.cpp utils.hpp -std=c++98

#include "UserInterface.hpp"

int main (void)
{
	UserInterface interface;

	while (1)
		interface.execute();
	return (0);
}