/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:30:14 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/23 14:24:27 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define NUMBER_OF_LEVELS 4

enum
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NOTHING
};

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
		int	getLevel(std::string level);
		void complainCall(int level);
	
	public:
		Harl(void);
		void complainFilter(std::string level);
		void complain(std::string level);
};

#endif
