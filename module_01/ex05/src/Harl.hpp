/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:30:14 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/23 10:46:34 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define NUMBER_OF_LEVELS 4

class Harl;

typedef struct s_func
{
	std::string level;
	void (Harl::*ptr) (void);
}	t_func;

class Harl
{
	private:
		t_func func[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		Harl(void);
		void complain(std::string level);
};

#endif
