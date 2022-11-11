/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:03:16 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/11 17:55:31 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "TypeCast.hpp"

#define CHAR	1
#define INT		2
#define FLOAT	3
#define DOUBLE	4

//atoi
//stoi
//strtol
//strtof
//strtod

int isInt(std::string str)
{
	int i;
	int numOfSigns;
	
	i = 0;
	numOfSigns = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			numOfSigns++;
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	if (numOfSigns > 1)
		return (0);
	if (numOfSigns && (str[0] != '-' && str[0] != '+'))
		return (0);
	return (1);
}

/*
int isFloat(std::string str)
{
	int size;
	int signs;
	int dots;
	int f;
	int i;

	i = 0;
	signs = 0;
	dots = 0;
	f = 0;
	size = static_cast<int>(str.size());
	if (size <= 1)
		return (0);
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+' && str[i] != 'f' && str[i] != 'F' && str[i] != '.')
			return (0);
		if (str[i] == '-' || str[i] == '+')
			signs++;
		if (str[i] == '.')
			dots++;
		if (str[i] == 'f' || str[i] == 'F')
			f++;
		i++;
	}
	if (signs > 1 || dots > 1 || f > 1)
		return (0);
	if ((str[size - 1] != 'f' && str[size - 1] != 'F') || (signs && (str[0] != '-' && str[0] != '+')))
		return (0);
	return (1);
}
*/

int isDecimal(std::string str, int size)
{
	int signs;
	int dots;
	int i;

	i = 0;
	signs = 0;
	dots = 0;
	while (str[i] && i < size)
	{
		if ((str[i] < '0' || str[i] > '9') 
			&& str[i] != '-' && str[i] != '+' && str[i] != '.')
			return (0);
		if (str[i] == '-' || str[i] == '+')
			signs++;
		if (str[i] == '.')
			dots++;
		i++;
	}
	if (signs > 1 || dots > 1 || (signs && (str[0] != '-' && str[0] != '+')))
		return (0);
	return (1);
}

int isFloat(std::string str)
{
	int s;

	s = str.size();
	if (isDecimal(str, s - 1) && (str[s - 1] == 'f' || str[s - 1] == 'F'))
		return (1);
	return (0);
}

int isDouble(std::string str)
{
	return (isDecimal(str, str.size()));
}


int getType(std::string str)
{
	if (str.size() == 1 && (str[0] <= '0' || str[0] >= '9'))
		return (CHAR);
	if (isInt(str))
		return (INT);
	if (isFloat(str))
		return (FLOAT);
	if (isDouble(str))
		return (DOUBLE);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error: Invalid argument" << std::endl;

	std::cout << getType(argv[1]) << std::endl;

	/*std::cout << atoi(argv[1]) << std::endl;
	std::cout << strtof(argv[1], NULL) << std::endl;
	std::cout << strtod(argv[1], NULL) << std::endl;
	std::cout << strtol(argv[1], NULL, 10) << std::endl;*/

	/*
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
	*/
	return (0);
}