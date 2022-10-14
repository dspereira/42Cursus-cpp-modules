/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:14:02 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/14 12:16:14 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(150)
{
	std::cout << "Bureaucrat default constutor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade <= 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();

	std::cout << "Bureaucrat constutor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other.getName())
{
	std::cout << "Bureaucrat copy constutor called" << std::endl;
	(*this) = other;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	(this->_grade)--;
}
		
void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	(this->_grade)++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException: The grade can't be higher than 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException: The grade can't be lower than 150");
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other)
{
	stream << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (stream);
}