/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:24:31 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/28 12:15:12 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): 
	fixedPointNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): 
	fixedPointNum(n << this->FRACTIONAL_BITS)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): 
	fixedPointNum((int) roundf(n * (1 << this->FRACTIONAL_BITS)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setRawBits(other.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointNum = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) this->getRawBits() / (float)(1 << this->FRACTIONAL_BITS));
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->FRACTIONAL_BITS);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return (stream);
}
