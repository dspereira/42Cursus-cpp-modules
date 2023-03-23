/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:22:00 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/23 17:30:37 by dsilveri         ###   ########.fr       */
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

		void	displayError(std::string error, std::string *param);
		void	displayDateValue(std::string line);
		int		getDateValue(std::string line, std::string &date, float *value);
		//void	getBitcoinPrices(std::string date);


	public:
				BitcoinExchange();
				BitcoinExchange(std::string fileName);
		void	bitcoinExchangeFile(std::string fileName);
};

#endif