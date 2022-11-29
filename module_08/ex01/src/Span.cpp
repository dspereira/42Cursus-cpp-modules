/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:19:29 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/29 18:14:39 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int size): _size(size){}

Span::~Span(){}

void Span::addNumber(int number)
{
    // tem de verificar se está cheio
    nbr.push_back(number);
}

unsigned int Span::shortestSpan(void)
{
    std::vector<int>::iterator  it;
    unsigned int                res;
    unsigned int                tmp;

    std::sort(nbr.begin(), nbr.end());
    for (it = nbr.begin(); it != nbr.end(); it++)
    {
        if (it != nbr.begin() && (it - 1) == nbr.begin())
            res = static_cast<unsigned int>(*it - *(it - 1));
        else{
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

    min = std::min_element(nbr.begin(), nbr.end());
    max = std::max_element(nbr.begin(), nbr.end());
    return (static_cast<unsigned int>(*max - *min));
}
