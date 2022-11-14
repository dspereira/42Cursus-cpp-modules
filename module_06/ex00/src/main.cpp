/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:03:16 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/14 10:42:28 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "TypeCast.hpp"

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
	if (!str.compare("-inff") || !str.compare("+inff") 
		|| !str.compare("inff") || !str.compare("nanf"))
		return (1);
	if (isDecimal(str, s - 1) && (str[s - 1] == 'f' || str[s - 1] == 'F'))
		return (1);
	return (0);
}

int isDouble(std::string str)
{
	if (!str.compare("-inf") || !str.compare("+inf") 
		|| !str.compare("inf") || !str.compare("nan"))
		return (1);
	return (isDecimal(str, str.size()));
}

int isChar(std::string str)
{
	if (str.size() == 1 && (str[0] < '0' || str[0] > '9'))
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	TypeCast data;

	if (argc != 2) {
		std::cout << "Error: Invalid argument" << std::endl;
		return (0);
	}
	if (isChar(argv[1]))
		data.setValue(argv[1][0]);
	else if (isInt(argv[1]))
		data.setValue(atoi(argv[1]));
	else if (isFloat(argv[1]))
		data.setValue(strtof(argv[1], NULL));
	else if (isDouble(argv[1]))
		data.setValue(strtod(argv[1], NULL));
	else
	{
		std::cout << "IMPOSIVEL" << std::endl;
		return (0);
	}
	data.setControlOverflow(strtol(argv[1], NULL, 10));
	data.printData();
	return (0);
}