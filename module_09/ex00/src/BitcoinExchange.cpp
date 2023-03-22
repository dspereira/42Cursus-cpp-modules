/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:20:57 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/22 12:40:47 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	std::fstream	data_file;
	std::string		line;
	std::size_t		pos;
	std::string		date;
	double value;

	data_file.open(fileName.c_str(), std::ios::in);
	if (data_file.is_open())
	{
		while (std::getline(data_file, line))
		{
			//std::cout << line << std::endl;
			pos = line.find(',');
			//std::cout << line.substr (0,pos) << " " <<  line.substr(pos + 1) << std::endl;
			date = line.substr (0,pos);
			value = atof(line.substr(pos + 1).c_str());
			this->bitcoinPrices.insert(std::pair <std::string, double>(date, value));
		}
	}
	data_file.close();
}