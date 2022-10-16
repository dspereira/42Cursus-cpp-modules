/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:20:17 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/16 16:30:47 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): 
	Form("ShrubberyCreationForm", 145, 137),
	_target("")
{
	std::cout << "ShrubberyCreationForm default constutor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
	Form("ShrubberyCreationForm", 145, 137),
	_target(target) 
{
	std::cout << "ShrubberyCreationForm constutor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	Form(other.getName(), other.getGradeToSign(), other.getGradeToExec()),
	_target(other._target)

{
	std::cout << "ShrubberyCreationForm copy constutor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::fstream file;
	std::string fileName;

	if (!(this->getIsSigned()))
		throw NotSignedException();
	else if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();

	fileName = this->_target + "_shrubbery";
	file.open(fileName.c_str(), std::ios::out);
	if (file.is_open())
	{
		file << "       _-_       " << std::endl
			 << "    /~~   ~~\\    " << std::endl
			 << " /~~         ~~\\ " << std::endl
			 << "{               }" << std::endl
			 << " \\  _-     -_  / " << std::endl
			 << "   ~  \\ //  ~   " << std::endl
			 << "_- -   | | _- _  " << std::endl
			 << "  _ -  | |   -_  " << std::endl
			 << "      // \\      " << std::endl;
		file.close();
	}
}
