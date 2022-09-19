/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:17:05 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/16 16:49:31 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>

int convertStringToInt(std::string str)
{
	int			i;
	long int	num;
	int			mult;

	i = 0;
	num = 0;
	mult = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = (num * 10) + str[i] - 48;
		i++;
	}
    return ((int)(num * mult));
}

void rightTrim(std::string& str)
{
	int i;

	i = str.length() - 1;
	if (!isspace(str[i]))
		return ;
	while (i >= 0 && isspace(str[i]))
		i--;
	str.erase(++i, str.length() - 1);
}