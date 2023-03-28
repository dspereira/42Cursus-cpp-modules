/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:32:26 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/28 17:16:41 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::string				_expression;
		std::string::iterator	it;
		std::stack<int>			stack;

		int getNextElem(void);
		int makeCalc(int elem);
		int getElemTopAndRemove(void);
		
	public:
		RPN();
		RPN(std::string expression);
		RPN(const RPN& other);
		~RPN();	
		RPN& operator=(const RPN& other);
		void displayResult(void);
};

#endif