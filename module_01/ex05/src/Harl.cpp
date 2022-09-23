/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:29:18 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/23 14:32:03 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->func[0].level = "DEBUG";
	this->func[1].level = "INFO";
	this->func[2].level = "WARNING";
	this->func[3].level = "ERROR";
	this->func[0].ptr = &Harl::debug;
	this->func[1].ptr = &Harl::info;
	this->func[2].ptr = &Harl::warning;
	this->func[3].ptr = &Harl::error;
}

void Harl::debug(void)
{
	std::cout
		<< "[ DEBUG ]"
		<< std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl
		<< std::endl;
}

void Harl::info(void)
{
	std::cout
		<< "[ INFO ]"
		<< std::endl 
		<< "I cannot believe adding extra bacon costs more money."
		<< "You didn’t put enough bacon in my burger!If you did, I wouldn’t be asking for more!"
		<< std::endl
		<< std::endl;
}

void Harl::warning(void)
{
	std::cout
		<< "[ WARNING ]"
		<< std::endl
		<< "I think I deserve to have some extra bacon for free."
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl
		<< std::endl;
}

void Harl::error(void)
{
	std::cout
		<< "[ ERROR ]"
		<< std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl
		<< std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < NUMBER_OF_LEVELS; i++)
	{
		if (!this->func[i].level.compare(level))
			(this->*func[i].ptr)();
	}
}
