/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:03:16 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/05 18:22:51 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "TypeCast.hpp"

//atoi
//strtol
//strtof
//strtod

int main(int argc, char **argv)
{
	
	if (argc != 2)
		std::cout << "Error: Invalid argument" << std::endl;

	/*std::cout << atoi(argv[1]) << std::endl;
	std::cout << strtof(argv[1], NULL) << std::endl;
	std::cout << strtod(argv[1], NULL) << std::endl;
	std::cout << strtol(argv[1], NULL, 10) << std::endl;*/

	TypeCast cast('a');
	std::cout << "char: " << cast.getTypeChar() << std::endl;
	std::cout << "int: " << cast.getTypeInt() << std::endl;
	std::cout << "float: " << cast.getTypeFloat() << std::endl;
	std::cout << "double: " << cast.getTypeDouble() << std::endl;

	std::cout << std::endl;
	TypeCast cast1(123);
	std::cout << "char: " << cast1.getTypeChar() << std::endl;
	std::cout << "int: " << cast1.getTypeInt() << std::endl;
	std::cout << "float: " << cast1.getTypeFloat() << std::endl;
	std::cout << "double: " << cast1.getTypeDouble() << std::endl;

	std::cout << std::endl;
	TypeCast cast2(42.42f);
	std::cout << "char: " << cast2.getTypeChar() << std::endl;
	std::cout << "int: " << cast2.getTypeInt() << std::endl;
	std::cout << "float: " << cast2.getTypeFloat() << std::endl;
	std::cout << "double: " << cast2.getTypeDouble() << std::endl;

	std::cout << std::endl;
	TypeCast cast3(42.42);
	std::cout << "char: " << cast3.getTypeChar() << std::endl;
	std::cout << "int: " << cast3.getTypeInt() << std::endl;
	std::cout << "float: " << cast3.getTypeFloat() << std::endl;
	std::cout << "double: " << cast3.getTypeDouble() << std::endl;
	return (0);
}