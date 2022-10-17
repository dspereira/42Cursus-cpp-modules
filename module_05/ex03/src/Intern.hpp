/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:55:46 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/17 11:24:01 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define NUMBER_OF_FORMS 3

class Intern;

typedef struct s_form
{
	std::string name;
	Form* (Intern::*fun)(std::string target);
}	t_form;

class Intern
{
	private:
		t_form form[NUMBER_OF_FORMS];
		Form *getNewShrubberyCreation(std::string target);
		Form *getNewRobotomyRequest(std::string target);
		Form *getNewPresidentialPardon(std::string target);
		void addElementToFormArr(std::string name, Form*(Intern::*f)(std::string target), int idx);

	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);
		Form* makeForm(std::string formName, std::string target);

		class WrongFormException: public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif
