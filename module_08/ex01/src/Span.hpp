/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:59:50 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/29 16:54:34 by dsilveri         ###   ########.fr       */
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

		//Lança excepção se já estiver cheio
		void addNumber(int number);

		//Lança excepção se não hover numeros armazenados
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
};

#endif
