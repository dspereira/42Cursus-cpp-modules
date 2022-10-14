/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:49:25 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/14 17:54:13 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;

	public:
		Form();
		Form(std::string _name, int _gradeToSign, int _gradeToExec);
		Form(const Form& other);
		~Form();
		Form& operator=(const Form& other);
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getIsSigned() const;
		void beSigned(const Bureaucrat& bureaucrat);

		class GradeTooHighException: public std::exception {
			public:
				const char* what() const throw();
		};
	
		class GradeTooLowException: public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Form& other);

#endif
