/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:51:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/17 11:39:01 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void testShrubberyCreationForm(void)
{
	Intern intern;
	Bureaucrat john("John", 150);
	Bureaucrat sarah("Sarah", 50);
	Bureaucrat kyle("Kyle", 10);
	Form *form = intern.makeForm("shrubbery creation", "home");
	Form *form1 = intern.makeForm("shrubbery creation", "42Lisboa");

	std::cout << std::endl;
	kyle.executeForm(*form);
	std::cout <<  std::endl;
	form->beSigned(sarah);
	std::cout <<  std::endl;
	form1->beSigned(kyle);
	sarah.executeForm(*form);
	std::cout <<  std::endl;
	kyle.executeForm(*form1);
	std::cout <<  std::endl;
	john.executeForm(*form);
	std::cout <<  std::endl;

	delete form;
	delete form1;
}

void testFormCreation(void)
{
	Form *form[3];
	Intern intern;

	form[0] = intern.makeForm("shrubbery creation", "home");
	form[1] = intern.makeForm("robotomy request", "T-1000");
	form[2] = intern.makeForm("presidential pardon", "T-1000");

	for (int i = 0; i < NUMBER_OF_FORMS; i++){
		if (form[i])
		{
			std::cout << std::endl;
			std::cout << *form[i];
			delete form[i];
		}
	}
	std::cout << std::endl;
	form[0] = intern.makeForm("wrong form", "T-1000");
	std::cout << *form;
	delete form[0];
}


void testCopy(void)
{
	Intern intern1;
	Intern intern2(intern1);
	Intern intern3;
	Form *form[3];

	intern3 = intern2;

	form[0] = intern1.makeForm("shrubbery creation", "home");
	form[1] = intern2.makeForm("robotomy request", "T-1000");
	form[2] = intern3.makeForm("presidential pardon", "T-1000");

	for (int i = 0; i < NUMBER_OF_FORMS; i++){
		if (form[i])
		{
			std::cout << std::endl;
			std::cout << *form[i];
			delete form[i];
		}
	}
}

int main (void)
{
	try {
		testFormCreation();
		//testCopy();
		//testShrubberyCreationForm();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
