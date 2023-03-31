/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:01:17 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/31 17:14:42 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool is_parameters_valid(char **args, int argc);

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (0);
	}
	if (!is_parameters_valid(&argv[1], argc))
	{
		std::cout << "Error: Invalid arguments" << std::endl;
		return (0);
	}
	PmergeMe merge(argc - 1);

	merge.sortList(&argv[1]);
}

static bool is_parameters_valid(char **args, int argc)
{
	for (int i = 0; i < argc - 1; i++)
	{
		for (int j = 0; args[i][j]; j++)
		{
			if (args[i][j] < '0' || args[i][j] > '9')
				return (false);
		}
	}	
	return (true);
}




/*
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: Wrong number of parameters" << std::endl;
		return (0);
	}

	std::list<int>::iterator it;
	std::list<int> list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	it = list.begin();
	while (it != list.end())
	{
		std::cout << "value: " << *it << std::endl;
		it++;
	}

	std::cout << "----------------" << std::endl;
	
	std::list<int> l1;
	std::list<int> l2;
	l1.push_back(10);
	l1.push_back(20);
	l2.push_back(30);
	l2.push_back(40);

	list.erase(list.begin(), list.end());

	list.merge(l1);
	list.merge(l2);
	
	it = list.begin();
	while (it != list.end())
	{
		std::cout << "value: " << *it << std::endl;
		it++;
	}

	return (0);
}
*/