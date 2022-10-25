/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:24:31 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/25 15:19:56 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): 
	rawBits(0) {}

Fixed::Fixed(const int n): 
	rawBits(n << this->FRACTIONAL_BITS){}

Fixed::Fixed(const float n): 
	rawBits((int) roundf(n * (1 << this->FRACTIONAL_BITS))) {}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) this->getRawBits() / (float)(1 << this->FRACTIONAL_BITS));
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->FRACTIONAL_BITS);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->getRawBits() != other.getRawBits());
}

// pre
Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

// pos
Fixed Fixed::operator++(int)
{
	Fixed n(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (n);
}

// pre
Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

// pos
Fixed Fixed::operator--(int)
{
	Fixed n(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (n);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	else 
		return (b);
}
		
Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return ((Fixed&) a);
	else 
		return ((Fixed&) b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	else 
		return (b);
}
		
Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return ((Fixed&) a);
	else 
		return ((Fixed&) b);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return (stream);
}
