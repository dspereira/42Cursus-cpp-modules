/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:59:50 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/30 18:46:11 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int 		_size;
		std::vector<int>	nbr;

	public:
		Span();
		Span(unsigned int size);
		Span(const Span& other);
		~Span();
		Span& operator=(const Span& other);
		void addNumber(int number);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		class ContainerIsFull: public std::exception {
			public:
				const char* what() const throw();
		};
		
		class NoSpanFound: public std::exception {
			public:
				const char* what() const throw();
		};

		class NoCapacity: public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
