/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:08:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/21 11:01:57 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (void)
{
	std::string str;  
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;
	std::cout << "memory address of the string    : " <<  &str << std::endl;
	std::cout << "memory address held by stringPTR: " <<  stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " <<  &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "value of the string variable    : " <<  str << std::endl;
	std::cout << "value pointed to by stringPTR   : " <<  *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF   : " <<  stringREF << std::endl;
	return (0);
}
