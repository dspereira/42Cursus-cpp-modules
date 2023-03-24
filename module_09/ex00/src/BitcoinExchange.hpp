/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:22:00 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/24 16:20:19 by dsilveri         ###   ########.fr       */
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

		void	displayDateValue(std::string line);
		int		getInputData(std::string line, std::string &date, float *value);
		float	getBitcoinPrices(std::string date);
		int		isValidDate(std::string date);
		void	displayError(std::string error, std::string *param);

	public:
				BitcoinExchange();
				BitcoinExchange(std::string fileName);
		int		bitcoinExchangeFile(std::string fileName);
};

#endif
