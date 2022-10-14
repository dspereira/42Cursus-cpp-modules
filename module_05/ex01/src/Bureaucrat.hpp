/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:59:50 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/14 17:14:42 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& other);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(const std::string& name, bool hasSigned, const std::string& reason) const;
		
		class GradeTooHighException: public std::exception {
			public:
				const char* what() const throw();
		};
	
		class GradeTooLowException: public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other);

#endif