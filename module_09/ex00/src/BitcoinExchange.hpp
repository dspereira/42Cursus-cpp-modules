/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:22:00 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/21 16:51:49 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_H
#define BITCOIN_EXCHANGE_H

#include <iostream>
#include <map>
#include <string>
#include <fstream>

class BitcoinExchange 
{
	private:
		std::map<std::string, int> bitcoinPrices;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string fileName);
};

#endif