/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:51:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/17 12:06:32 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void testShrubberyCreationForm(void)
{
	Bureaucrat john("John", 150);
	Bureaucrat sarah("Sarah", 50);
	Bureaucrat kyle("Kyle", 10);
	ShrubberyCreationForm form("home");
	ShrubberyCreationForm form1("42Lisboa");
	
	std::cout << std::endl;
	kyle.executeForm(form);
	std::cout <<  std::endl;
	form.beSigned(sarah);
	std::cout <<  std::endl;
	form1.beSigned(kyle);
	sarah.executeForm(form);
	std::cout <<  std::endl;
	kyle.executeForm(form1);
	std::cout <<  std::endl;
	john.executeForm(form);
	std::cout <<  std::endl;
}

void testRobotomyRequestForm(void)
{
	Bureaucrat john("John", 150);
	Bureaucrat sarah("Sarah", 50);
	Bureaucrat kyle("Kyle", 10);
	RobotomyRequestForm form("T-1000");
	
	std::cout << std::endl;
	kyle.executeForm(form);
	std::cout <<  std::endl;
	form.beSigned(sarah);
	std::cout <<  std::endl;
	sarah.executeForm(form);
	std::cout <<  std::endl;
	kyle.executeForm(form);
	std::cout <<  std::endl;
	john.executeForm(form);
	std::cout <<  std::endl;
}

void testPresidentialPardonForm(void)
{
	Bureaucrat john("John", 150);
	Bureaucrat sarah("Sarah", 25);
	Bureaucrat kyle("Kyle", 1);
	PresidentialPardonForm form("T-1000");
	
	std::cout << std::endl;
	kyle.executeForm(form);
	std::cout <<  std::endl;
	form.beSigned(sarah);
	std::cout <<  std::endl;
	sarah.executeForm(form);
	std::cout <<  std::endl;
	kyle.executeForm(form);
	std::cout <<  std::endl;
	john.executeForm(form);
	std::cout << std::endl;
}

int main (void)
{
	try {
		testShrubberyCreationForm();
		//testRobotomyRequestForm();
		//testPresidentialPardonForm();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
