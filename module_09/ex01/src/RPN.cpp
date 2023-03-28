/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:36:34 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/28 15:59:03 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#define END_EXPRESSION  2147483647

RPN::RPN(): _expression("") {}

RPN::RPN(std::string expression): _expression(expression) 
{
    this->it = _expression.begin();
}

RPN::~RPN() {}

void RPN::displayResult(void)
{
    int elem;

    if (_expression.size() == 0)
    {
        std::cout << "Error" << std::endl;
        return ;
    }
    elem = getNextElem();
    while (elem != END_EXPRESSION)
    {
        if (elem == -1)
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        makeCalc(elem);
        elem = getNextElem();
    }
    if (stack.size())
            std::cout << stack.top() << std::endl;
            
    /*if (elem == END_EXPRESSION)
    {
        if (stack.size())
            std::cout << stack.top() << std::endl;
        return ;
    }*/
}

// private methods
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
    if (*it > '0' && *it <= '9')
        res = *it - '0';
    else if (*it == '+' || *it == '-' || *it == '/' || *it == '*')
        res = *it;
    else
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
            res = n1 / n2;
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