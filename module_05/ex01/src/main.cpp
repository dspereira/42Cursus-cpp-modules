/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:51:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/14 18:02:48 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void test_copy(void)
{
	Form form1("Form1", 20, 30);
	Form form2("Form2", 120, 130);
	Form form_clone = form1;

	form2 = form1;

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form_clone << std::endl;
}

int main (void)
{
	try {
		//test_copy();
		Form form42("Entry Form", 20, 30);
		Bureaucrat John("John", 10);
		Bureaucrat Sarah("Sarah", 50);
		
		std::cout << std::endl;
		std::cout << form42 << std::endl;
		
		form42.beSigned(John);
		form42.beSigned(John);
		form42.beSigned(Sarah);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
