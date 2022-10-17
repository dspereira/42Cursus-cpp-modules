/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:40:26 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/16 17:06:51 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45),
	_target("")
{
	std::cout << "RobotomyRequestForm default constutor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 72, 45),
	_target(target) 
{
	std::cout << "RobotomyRequestForm constutor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
	Form(other.getName(), other.getGradeToSign(), other.getGradeToExec()),
	_target(other._target)

{
	std::cout << "RobotomyRequestForm copy constutor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    static int counter = 0;

	if (!(this->getIsSigned()))
		throw NotSignedException();
	else if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();

    std::cout << "Drilling noises!" << std::endl;
    counter++;
    if (counter % 2)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "the robotomy of " << this->_target << " failed" << std::endl;
}
