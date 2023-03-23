/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:20:57 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/23 17:26:19 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	std::fstream	data_file;
	std::string		line;
	std::string		date;
	size_t			pos;
	double			value;

	data_file.open(fileName.c_str(), std::ios::in);
	if (data_file.is_open())
	{
		std::getline(data_file, line);
		while (std::getline(data_file, line))
		{
			pos = line.find(',');
			date = line.substr (0, pos);
			value = std::atof(line.substr(pos + 1).c_str());
			this->bitcoinPrices.insert(std::pair <std::string, double>(date, value));
		}
	}
	data_file.close();
}

void BitcoinExchange::bitcoinExchangeFile(std::string fileName)
{
	std::fstream	data_file;
	std::string		line;

	data_file.open(fileName.c_str(), std::ios::in);
	if (!data_file.is_open())
		displayError("could not open file.", NULL);
	std::getline(data_file, line);
	while (std::getline(data_file, line))
		displayDateValue(line);
	data_file.close();
}

void BitcoinExchange::displayError(std::string error, std::string *param)
{
	std::cout << "Error: " << error;
	if (param)
		std::cout << " => " << *param;
	std::cout << std::endl;
}

void BitcoinExchange::displayDateValue(std::string line)
{
	std::string 							date;
	float									value;
	float									total;
	std::map<std::string, double>::iterator	it;

	if (getDateValue(line, date, &value) == -1)
		return ;
	it = bitcoinPrices.lower_bound(date);



	std::cout << date << " => ";
	if (it->first.compare(date) == 0)
		total = value * it->second;
	else
		total = value * (--it)->second;
	std::cout << value << " = " << total << std::endl;
}

int BitcoinExchange::getDateValue(std::string line, std::string &date, float *value)
{
	size_t	pos;

	pos = line.find('|');
	if (pos == std::string::npos || line[pos - 1] != ' ' || line[pos + 1] != ' ')
	{
		displayError("bad input", &line);
		return (-1);
	}
	*value = std::atof(line.substr(pos + 1).c_str());
	if (*value > 1000)
	{
		displayError("too large a number.", NULL);
		return (-1);
	}
	else if (*value < 0)
	{
		displayError("not a positive number.", NULL);
		return (-1);
	}
	date = line.substr(0, pos - 1);
	return (0);
}
