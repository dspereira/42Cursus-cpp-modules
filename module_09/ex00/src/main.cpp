/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:30:21 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/23 17:26:39 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(void)
{
	BitcoinExchange bt("data.csv");

    bt.bitcoinExchangeFile("input.txt");
	
	
	//std::map<std::string, int> myMap;

	/*myMap.insert(std::pair<std::string,int>("2011-05-08",100));
	myMap.insert(std::pair<std::string,int>("2011-08-08",200));
	myMap.insert(std::pair<std::string,int>("2011-11-08",400));

	std::cout << myMap["2011-05-08"] << std::endl;
	std::cout << myMap["2011-08-08"] << std::endl;
	std::cout << myMap["2011-11-08"] << std::endl;

	std::map<std::string,int>::iterator low, up;

	low = myMap.lower_bound("2012-08-09");

	std::cout << low->first << std::endl;
	low--;
	std::cout << low->first << std::endl;*/

    /*
    std::map<std::string,int>::iterator it;

    it = myMap.end();

    std::cout << it->first << std::endl;
    */
    


	
	return (0);
}
