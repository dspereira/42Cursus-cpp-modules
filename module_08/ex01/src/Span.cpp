/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:19:29 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/30 19:13:30 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0){}

Span::Span(unsigned int size): _size(size){}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span(){}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		nbr = other.nbr;
		_size = other._size;
	}
	return (*this);
}

void Span::addNumber(int number)
{
	if (nbr.size() < _size) 
		nbr.push_back(number);
	else
		throw ContainerIsFull();
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (nbr.size() + std::distance(begin, end) > _size)
		throw NoCapacity();
	nbr.insert(nbr.end(), begin, end);
}

unsigned int Span::shortestSpan(void)
{
	std::vector<int>::iterator  it;
	unsigned int                res;
	unsigned int                tmp;

	if (nbr.size() < 2)
		throw NoSpanFound();
	std::sort(nbr.begin(), nbr.end());
	for (it = nbr.begin(); it != nbr.end(); it++)
	{
		if (it == nbr.begin())
			res = static_cast<unsigned int>(*it - *(it + 1));
		else
		{
			tmp = static_cast<unsigned int>(*it - *(it - 1));
			if (tmp < res)
				res = tmp;			
		}
	}

	return(res);
}

unsigned int Span::longestSpan(void)
{
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

	if (nbr.size() < 2)
		throw NoSpanFound();
	min = std::min_element(nbr.begin(), nbr.end());
	max = std::max_element(nbr.begin(), nbr.end());
	return (static_cast<unsigned int>(*max - *min));
}

const char* Span::ContainerIsFull::what() const throw()
{
	return ("ContainerIsFull: Unable to add numbers to container");
}

const char* Span::NoSpanFound::what() const throw()
{
	return ("NoSpanFound: The container has less than 2 elements");
}

const char* Span::NoCapacity::what() const throw()
{
	return ("NoCapacity: The container don't have capacity for that numbers");
}
