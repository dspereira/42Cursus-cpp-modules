/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:36:34 by dsilveri          #+#    #+#             */
/*   Updated: 2023/04/03 15:17:45 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#define END_EXPRESSION  2147483647

RPN::RPN(): _expression("") 
{
	this->it = _expression.begin();
}

RPN::RPN(std::string expression): _expression(expression) 
{
	this->it = _expression.begin();
}

RPN::RPN(const RPN& other)
{
	(*this) = other;
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
	{
		this->_expression = other._expression;
		this->it = this->_expression.begin();
	}
	return (*this);
}

void RPN::displayResult(void)
{
	int elem;

	while (true)
	{
		elem = getNextElem();
		if (elem == -1 || elem == END_EXPRESSION)
			break;
		if (makeCalc(elem) == -1)
		{
			std::cout << "Error" << std::endl;
			return ;
		}
			
	}
	if (stack.size() == 1 && elem == END_EXPRESSION)
		std::cout << stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}

int RPN::getNextElem(void)
{
	int res;

	while (it != _expression.end())
	{
		if (*it != ' ')
			break;
		it++;
	}
	if (it == _expression.end())
		return (END_EXPRESSION);
	if (*it >= '0' && *it <= '9')
		res = *it - '0';
	else if (*it == '+' || *it == '-' || *it == '/' || *it == '*')
	{
		res = *it;
		if (stack.size() < 2)
			res = -1;
	}
	else
	    res = -1;
	if(it != --(_expression.end()) && *(it + 1) != ' ')
		res = -1;
	it++;
	return (res);
}

int RPN::makeCalc(int elem)
{
	int n1;
	int n2;
	int res;
	
	if (elem >= 0 && elem <= 9)
		stack.push(elem);
	else
	{
		n2 = getElemTopAndRemove();
		n1 = getElemTopAndRemove();
		
		if (elem == '+')
			res = n1 + n2;
		else if (elem == '-')
			res = n1 - n2;
		else if (elem == '*')
			res = n1 * n2;
		else if (elem == '/')
		{
			if (!n2)
				return (-1);
			res = n1 / n2;
		}
		stack.push(res);
	}
	return (0);
}

int RPN::getElemTopAndRemove(void)
{
	int n;

	n = 0;
	if (stack.size())
	{
		n = stack.top();
		stack.pop(); 
	}
	return (n);
}
