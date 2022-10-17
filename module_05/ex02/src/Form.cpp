/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:02:41 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/17 11:59:09 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
	_name("Generic Form"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExec(150)
{
	std::cout << "Form default constutor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec):
	_name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << "Form constutor called" << std::endl;
}

Form::Form(const Form& other):
	_name(other.getName()),
	_isSigned(other.getIsSigned()),
	_gradeToSign(other.getGradeToSign()),
	_gradeToExec(other.getGradeToExec())
{
	std::cout << "Form copy constutor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &other)
		this->_isSigned = this->getIsSigned();
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExec() const
{
	return (this->_gradeToExec);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign()){
		bureaucrat.signForm(this->getName(), false, "the grade is to low");
		throw GradeTooLowException();
	}
	else if (this->getIsSigned()){
		bureaucrat.signForm(this->getName(), false, "the form was already signed");
	}
	else{
		bureaucrat.signForm(this->getName(), true, "");
		this->_isSigned = true;
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form: GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form: GradeTooLowException");
}

const char* Form::NotSignedException::what(void) const throw () 
{
	return ("Form: NotSignedException");
}

std::ostream& operator<<(std::ostream& stream, const Form& other)
{
	std::string signMsg;

	if (other.getIsSigned())
		signMsg = "true";
	else 
		signMsg = "false";
	stream << "Form: " << other.getName() << std::endl
		   << "Signed: " << signMsg << std::endl
		   << "Grade to sign it: " << other.getGradeToSign() << std::endl
		   << "Grade to execute it: " << other.getGradeToExec() << std::endl;
	return (stream);
}
