/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:51:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/15 17:57:17 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
	try {
		Bureaucrat john("John", 150);
		Bureaucrat sarah("Sarah", 30);
		ShrubberyCreationForm form("home");

		std::cout << std::endl;
		form.beSigned(sarah);
		//form.execute(sarah);

		sarah.executeForm(form);
		john.executeForm(form);
		std::cout <<  std::endl;

		//std::cout << form.getGradeToExec() << std::endl;
		//std::cout << form << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
