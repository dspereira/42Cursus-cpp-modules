/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:20:57 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/21 18:05:13 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	std::fstream	data_file;
	std::string		line;

	data_file.open(fileName.c_str(), std::ios::in);
	if (data_file.is_open())
	{
		while (std::getline(data_file, line))
		{
			std::cout << line << std::endl;
		}
	}
	
	data_file.close();
}