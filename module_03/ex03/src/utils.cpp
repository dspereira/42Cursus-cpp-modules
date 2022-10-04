/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:34:13 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/03 09:36:22 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string convertNumtoString(unsigned int n)
{
	std::string	str;
	std::string	num;

	if (!n)
		str = "0";
	while (n > 0)
	{
		num = (char) ((n - ((n / 10) * 10)) + '0');
		str.insert(0, num);
		n /= 10;
	}
	return (str);
}
