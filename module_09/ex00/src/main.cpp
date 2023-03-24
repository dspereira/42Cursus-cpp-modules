/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:30:21 by dsilveri          #+#    #+#             */
/*   Updated: 2023/03/24 16:13:23 by dsilveri         ###   ########.fr       */
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
    BitcoinExchange bt("data.csv");
    bt.bitcoinExchangeFile(argv[1]);
	return (0);
}
