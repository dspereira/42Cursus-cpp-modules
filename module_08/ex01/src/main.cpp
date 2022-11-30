/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:56:20 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/30 19:12:27 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

void test_subject(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void test_exeptions(void)
{
	
	Span sp1 = Span(5);

	// tries add numbers when span is full
	try{
		Span sp = Span(5);
		for(int i = 0; i < 6; i++)
			sp.addNumber(i);
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	// tries to get shortest Span of empty span
	try{
		Span sp = Span(5);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	// tries to get longest Span of empty span
	try{
		Span sp = Span(5);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	// tries to add more numbers than max capacity
	try{
		std::vector<int> v;
		Span sp = Span(3);

		for (unsigned int i = 0; i < 5; i++)
			v.push_back(i);
		sp.addNumbers(v.begin(), v.end());
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}

}

void test_large_range_numbers()
{
	unsigned int n = 100000; 
	Span sp = Span(n);

	for (unsigned int i = 0; i < n; i++)
		sp.addNumber(i);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void test_large_range_numbers1()
{
	unsigned int n = 100000; 
	std::vector<int> v;
	Span sp = Span(n);

	for (unsigned int i = 3; i < n; i++)
		v.push_back(i);
	
	sp.addNumber(0);
	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumbers(v.begin(), v.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void test_negatives(void)
{
	Span sp = Span(5);

	sp.addNumber(-10);
	sp.addNumber(-1);
	sp.addNumber(3);
	sp.addNumber(5);
	sp.addNumber(10);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void test_repetid_numbers(void)
{
	Span sp = Span(5);

	sp.addNumber(1);
	sp.addNumber(1);
	sp.addNumber(3);
	sp.addNumber(5);
	sp.addNumber(10);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main(void)
{

	std::cout << "Subject test" << std::endl;
	test_subject();
	std::cout << std::endl;
	std::cout << "Exception test" << std::endl;
	test_exeptions();
	std::cout << std::endl;
	std::cout << "Large range numbers test" << std::endl;
	test_large_range_numbers();
	std::cout << std::endl;
	std::cout << "Large range numbers test" << std::endl;
	test_large_range_numbers1();
	std::cout << std::endl;
	std::cout << "Negative numbers test" << std::endl;
	test_negatives();
	std::cout << std::endl;
	std::cout << "Repetid numbers test" << std::endl;
	test_repetid_numbers();

	return (0);
}


/*
int main(void)
{

	Span sp = Span(5);
	sp.addNumber(2);
	sp.addNumber(3);
	sp.longestSpan();
	sp.shortestSpan();

	return (0);
}
*/