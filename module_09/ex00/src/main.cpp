/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:30:21 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/24 18:12:07 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (-1);
    }
    BitcoinExchange btc("data.csv");
    btc.bitcoinExchangeFile(argv[1]);
	return (0);
}
