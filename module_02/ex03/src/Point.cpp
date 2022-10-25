/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:06:34 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/25 16:01:36 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): 
	x(Fixed(0)), y(Fixed(0)){}


Point::Point(const float x, const float y):
	x(x), y(y){}


Point::Point(const Point& other):
	x(other.getX()), y(other.getY()) {}

Point::~Point(void){}

Point& Point::operator=(const Point& other)
{
	if (this != &other){
		this->setX(other.getX());
		this->setY(other.getY());
	}
	return (*this);    
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

void Point::setX(const Fixed& x)
{
	this->x = x;
}

void Point::setY(const Fixed& y)
{
	this->y = y;
}

std::ostream& operator<<(std::ostream& stream, const Point& other)
{
	stream << "(" << other.getX() << ", " << other.getY() << ")";
	return (stream);
}
