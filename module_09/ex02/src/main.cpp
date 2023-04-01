/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:01:17 by dsilveri          #+#    #+#             */
/*   Updated: 2023/04/01 16:14:36 by dsilveri         ###   ########.fr       */
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
	PmergeMe merge;
	merge.sortList(&argv[1], argc - 1);
	merge.sortVector(&argv[1], argc - 1);
	merge.displayInfo(&argv[1], argc - 1);
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
