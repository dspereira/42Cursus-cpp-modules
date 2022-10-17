/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:54:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/17 11:38:41 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	addElementToFormArr("shrubbery creation", &Intern::getNewShrubberyCreation, 0);
	addElementToFormArr("robotomy request", &Intern::getNewRobotomyRequest, 1);
	addElementToFormArr("presidential pardon", &Intern::getNewPresidentialPardon, 2);
	std::cout << "Intern default constutor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
	std::cout << "Intern copy constutor called" << std::endl;
	*this = other;	
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < NUMBER_OF_FORMS; i++)
			this->form[i] = other.form[i];
	}
	return (*this);
}

Form* Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < NUMBER_OF_FORMS; i++){
		if (!(this->form[i].name.compare(formName)))
			return ((this->*form[i].fun)(target));
	}
	throw WrongFormException();
}

Form* Intern::getNewShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::getNewRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::getNewPresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

void Intern::addElementToFormArr(std::string name, Form* (Intern::*f)(std::string target), int idx)
{
	if (idx < 0 || idx >= NUMBER_OF_FORMS)
		return ;
	this->form[idx].name = name;
	this->form[idx].fun = f;
}

const char* Intern::WrongFormException::what() const throw()
{
	return ("Intern: WrongFormException");
}
