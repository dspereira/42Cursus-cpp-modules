/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:55:04 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/25 21:37:44 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void print(int &n)
{
    std::cout << n << std::endl;
}

void print(std::string &str)
{
    std::cout << str << std::endl;
}

void sum(int &n)
{
    n = n * 2;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
	std::string str[] = {"s1", "s2", "s3", "s4", "s5"};

    ::iter<int>(a, 5, sum);
    ::iter<int>(a, 5, print);
	::iter<std::string>(str, 5, print);
	
    return (0);
}
