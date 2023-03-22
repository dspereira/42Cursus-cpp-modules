/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:30:21 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/22 12:47:47 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(void)
{
	BitcoinExchange bt("data.csv");
	std::map<std::string, double>::iterator it;
	
	for (it = bt.bitcoinPrices.begin(); it != bt.bitcoinPrices.end(); ++it)
	std::cout << it->first << " => " << it->second << '\n';
	
	/*std::map<std::string, int> myMap;

	myMap.insert(std::pair<std::string,int>("2011-05-08",100));
	myMap.insert(std::pair<std::string,int>("2011-08-08",200));
	myMap.insert(std::pair<std::string,int>("2011-11-08",400));

	std::cout << myMap["2011-05-08"] << std::endl;
	std::cout << myMap["2011-08-08"] << std::endl;
	std::cout << myMap["2011-11-08"] << std::endl;

	std::map<std::string,int>::iterator low, up;

	low = myMap.lower_bound("2011-08-09");

	std::cout << low->first << std::endl;
	low--;
	std::cout << low->fi100rst << std::endl;*/
	
	

	return (0);
}
