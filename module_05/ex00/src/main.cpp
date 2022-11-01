/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:51:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/01 15:43:00 by dsilveri         ###   ########.fr       */
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
/*
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
*/

void test_grade_to_high(void)
{
	Bureaucrat John("John", 0);
}

void test_grade_to_low(void)
{
	Bureaucrat John("John", 151);
}

void test_grade_increment(void)
{
	Bureaucrat John("John", 5);
	for (int i = 0; i < 10; i++){
		John.incrementGrade();
		std::cout << John.getGrade() << std::endl;
	}
}

void test_grade_decrement(void)
{
	Bureaucrat John("John", 145);
	for (int i = 0; i < 10; i++){
		John.decrementGrade();
		std::cout << John.getGrade() << std::endl;
	}
}

int main (void)
{
	try {
		test_copy();
		//test_grade_to_high();
		//test_grade_to_low();
		//test_grade_increment();
		//test_grade_decrement();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}