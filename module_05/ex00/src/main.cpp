/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:51:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/14 12:26:23 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void test_copy(void)
{
	Bureaucrat John("John", 150);
	Bureaucrat Sarah("Sarah", 30);
	Bureaucrat clone = John;

	John = Sarah;

	std::cout << John << std::endl;
	std::cout << Sarah << std::endl;
	std::cout << clone << std::endl;
}

void tests(void)
{
	Bureaucrat John("John", 50);
	Bureaucrat Sarah("Sarah", 30);

	std::cout << John << std::endl;
	std::cout << Sarah << std::endl;

	John.incrementGrade();
	Sarah.decrementGrade();

	std::cout << John << std::endl;
	std::cout << Sarah << std::endl;
}

int main (void)
{
	try {
		test_copy();
		std::cout << std::endl << std::endl;
		tests();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}