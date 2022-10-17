/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:07:02 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/16 17:38:51 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5),
	_target("")
{
	std::cout << "PresidentialPardonForm default constutor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5),
	_target(target) 
{
	std::cout << "PresidentialPardonForm constutor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
	Form(other.getName(), other.getGradeToSign(), other.getGradeToExec()),
	_target(other._target)

{
	std::cout << "PresidentialPardonForm copy constutor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!(this->getIsSigned()))
		throw NotSignedException();
	else if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
    
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
