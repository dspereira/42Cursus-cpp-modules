/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:31:19 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/28 14:55:41 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong parameters" << std::endl;
		return (-1);
	}
	RPN rpn(argv[1]);
	rpn.displayResult();

	return (0);
}