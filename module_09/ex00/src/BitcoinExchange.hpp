/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:22:00 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/23 15:46:12 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_H
#define BITCOIN_EXCHANGE_H

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cstdlib>

class BitcoinExchange 
{
	private:
		std::map<std::string, double> bitcoinPrices;

		void	displayError(std::string error);
		void	displayDateValue(std::string line);
		//float	getValue(std::string line);
		int		getValue(std::string line, float *value);
		//std::string	getDate(std::string line);
		int		getDate(std::string line, std::string &date);

		int		getDateValue(std::string line, std::string &date, float *value);


	public:
				BitcoinExchange();
				BitcoinExchange(std::string fileName);
		void	bitcoinExchangeFile(std::string fileName);
};

#endif