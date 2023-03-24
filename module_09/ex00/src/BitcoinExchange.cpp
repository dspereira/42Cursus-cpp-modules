/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:20:57 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/24 18:20:34 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

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
		data_file.close();
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	(*this) = other;
}

BitcoinExchange::~BitcoinExchange(){};

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		this->bitcoinPrices.insert(other.bitcoinPrices.begin(),
				other.bitcoinPrices.end());
	return (*this);
}

int BitcoinExchange::bitcoinExchangeFile(std::string fileName)
{
	std::fstream	data_file;
	std::string		line;

	data_file.open(fileName.c_str(), std::ios::in);
	if (!data_file.is_open() || bitcoinPrices.empty())
	{
		displayError("could not open file.", NULL);
		return (-1);
	}
	std::getline(data_file, line);
	while (std::getline(data_file, line))
		displayDateValue(line);
	data_file.close();
	return (0);
}

// PRIVATE METHODS
void BitcoinExchange::displayDateValue(std::string line)
{
	std::string	date;
	float		value;
	float		total;

	if (getInputData(line, date, &value) == -1)
		return ;
	total = getBitcoinPrices(date) * value;
	std::cout << date << " => " << value << " = " << total << std::endl;
}

int BitcoinExchange::getInputData(std::string line, std::string &date, float *value)
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
	if (!isValidDate(date))
	{
		displayError("not a valid date.", NULL);
		return (-1);
	}
	return (0);
}

float BitcoinExchange::getBitcoinPrices(std::string date)
{
	std::map<std::string, double>::iterator	it, end, begin;

	it = bitcoinPrices.lower_bound(date);
	begin = bitcoinPrices.begin();
	end = --bitcoinPrices.end();
	if (date.compare(begin->first) < 0)
		return (0);
	if (date.compare(end->first) > 0)
		return (end->second);
	if (it->first.compare(date) == 0)
		return (it->second);
	return ((--it)->second);
}

int BitcoinExchange::isValidDate(std::string date)
{
	size_t fDash;
	size_t sDash;
	int	   y;
	int	   m;
	int	   d;

	fDash = date.find('-');
	sDash = date.rfind('-');
	if (fDash == std::string::npos || sDash == std::string::npos 
		|| fDash == sDash)
		return (0);
	y = std::atoi(date.substr(0, fDash).c_str());
	m = std::atoi(date.substr(fDash + 1, sDash).c_str());
	d = std::atoi(date.substr(sDash + 1).c_str());
	if (m < 0 || m > 12)
		return (0);
	if (d < 0 || d > 31)
		return (0);
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
		return (0);
	if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
	{
		if (m == 2 && d > 29)
			return (0);
	}
	else
	{
		if (m == 2 && d > 28)
			return (0);
	}
	return (1);
}

void BitcoinExchange::displayError(std::string error, std::string *param)
{
	std::cerr << "Error: " << error;
	if (param)
		std::cerr << " => " << *param;
	std::cerr << std::endl;
}
