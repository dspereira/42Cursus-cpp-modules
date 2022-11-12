/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCast.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:00:00 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/12 21:05:46 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeCast.hpp"

TypeCast::TypeCast()
{
	//std::cout << "default constructor" << std::endl;
}

TypeCast::TypeCast(char n)
{
	setValue(n);
	//std::cout << "constructor char" << std::endl;
}

TypeCast::TypeCast(int n)
{
	setValue(n);
	//std::cout << "constructor int" << std::endl;
}

TypeCast::TypeCast(float n)
{
	setValue(n);
	//std::cout << "constructor float" << std::endl;
}

TypeCast::TypeCast(double n)
{
	setValue(n);
	//std::cout << "constructor double" << std::endl;
}

TypeCast::TypeCast(const TypeCast& other)
{
	*this = other;
}

TypeCast::~TypeCast()
{
	//std::cout << "destructor called" << std::endl;
}

TypeCast& TypeCast::operator=(const TypeCast& other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->controlOverflow = other.controlOverflow;
		this->typeChar = other.getTypeChar();
		this->typeInt = other.getTypeInt();
		this->typeFloat = other.getTypeFloat();
		this->typeDouble = other.getTypeDouble();
	}
	return (*this);
}

void TypeCast::setValue(char n)
{
	this->typeChar = n;
	this->typeInt = static_cast<int>(n);
	this->typeFloat = static_cast<float>(n);
	this->typeDouble = static_cast<double>(n);
	std::cout << "char" << std::endl;
}

void TypeCast::setValue(int n)
{
	this->typeInt = n;
	this->typeChar = static_cast<char>(n);
	this->typeFloat = static_cast<float>(n);
	this->typeDouble = static_cast<double>(n);
	std::cout << "int" << std::endl;
}

void TypeCast::setValue(float n)
{
	this->typeFloat = n;
	this->typeInt = static_cast<int>(n);
	this->typeChar= static_cast<char>(n);
	this->typeDouble = static_cast<double>(n);
	std::cout << "float" << std::endl;
}

void TypeCast::setValue(double n)
{
	this->typeDouble = n;
	this->typeInt = static_cast<int>(n);
	this->typeFloat = static_cast<float>(n);
	this->typeChar = static_cast<char>(n);
	std::cout << "double" << std::endl;
}

void TypeCast::setControlOverflow(long int n)
{
	this->controlOverflow = n;
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

void TypeCast::printDataImpossible(void) const
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: " << "impossible" << std::endl;
}

void TypeCast::printData(void) const
{
	/*if ((this->controlOverflow > MAX_INT || this->controlOverflow < MIN_INT))
	{
		printDataImpossible();
		return ;
	}*/

	if (this->typeFloat != this->typeFloat)
		std::cout << "char: " << "impossible" << std::endl;
	else if (this->typeChar >= 32 && this->typeChar <= 126)
		std::cout << "char: " << this->typeChar << std::endl;
	else 
		std::cout << "char: " << "Non displayable" << std::endl;

	if (this->typeFloat != this->typeFloat)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << this->typeInt << std::endl;

	std::cout << std::fixed;
    std::cout << std::setprecision(1);	
	std::cout << "float: " << this->typeFloat << 'f' << std::endl;
	std::cout << "double: " << this->typeDouble << std::endl;
}
