/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCast.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:00:00 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/05 18:14:44 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeCast.hpp"
#include <iostream>

TypeCast::TypeCast()
{
	std::cout << "standard" << std::endl;
}

TypeCast::TypeCast(char n):
	typeChar(n),
	typeInt(static_cast<int>(n)),
	typeFloat(static_cast<float>(n)),
	typeDouble(static_cast<double>(n))

{
	std::cout << "char" << std::endl;
}

TypeCast::TypeCast(int n):
	typeInt(n),
	typeChar(static_cast<char>(n)),
	typeFloat(static_cast<float>(n)),
	typeDouble(static_cast<double>(n))
{
	std::cout << "int" << std::endl;
}

TypeCast::TypeCast(float n):
	typeFloat(n),
	typeInt(static_cast<int>(n)),
	typeChar(static_cast<char>(n)),
	typeDouble(static_cast<double>(n))
{
	std::cout << "float" << std::endl;
}

TypeCast::TypeCast(double n):
	typeDouble(n),
	typeInt(static_cast<int>(n)),
	typeChar(static_cast<char>(n)),
	typeFloat(static_cast<float>(n))
{
	std::cout << "double" << std::endl;
}

char TypeCast::getTypeChar(void) const
{
	return (this->typeChar);
}

int TypeCast::getTypeInt(void) const
{
	return (this->typeInt);
}

float TypeCast::getTypeFloat(void) const
{
	return (this->typeFloat);
}

double TypeCast::getTypeDouble(void) const
{
	return (this->typeDouble);
}