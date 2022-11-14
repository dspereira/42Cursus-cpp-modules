/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:03:16 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/14 11:34:04 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "TypeCast.hpp"
#include "utils.hpp"

int main(int argc, char **argv)
{
	TypeCast data;

	if (argc != 2) {
		std::cout << "Error: Wrong Parameters" << std::endl;
		return (0);
	}
	if (isChar(argv[1]))
		data.setValue(argv[1][0]);
	else if (isInt(argv[1]))
		data.setValue(std::atoi(argv[1]));
	else if (isFloat(argv[1]))
		data.setValue(std::strtof(argv[1], NULL));
	else if (isDouble(argv[1]))
		data.setValue(std::strtod(argv[1], NULL));
	else
	{
		std::cout << "Error: Wrong Parameters" << std::endl;
		return (0);
	}
	data.setControlOverflow(strtol(argv[1], NULL, 10));
	data.printData();
	return (0);
}
