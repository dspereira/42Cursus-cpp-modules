/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:08:46 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/29 12:16:24 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

template <typename T>
void test(const T& data)
{
	try {
		for(int i = 0; i < 4; i++)
		std::cout << *easyFind(data, i) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	std::vector<int>	v;
	std::list<int>		l;

	for(int i = 0; i < 3; i++)
	{
		v.push_back(i);
		l.push_back(i);
	}
	
	std::cout << "Teste vector" << std::endl;
	test(v);
	std::cout << std::endl;
	std::cout << "Teste list" << std::endl;
	test(l);

	return (0);
}