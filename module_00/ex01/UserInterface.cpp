/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserInterface.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:37:20 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/09 16:26:40 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UserInterface.hpp"


void UserInterface::execute(void)
{
    std::string input;

    input = getInput();
    if (!input.compare("EXIT"))
        exit(0);
    else if (!input.compare("ADD"))
        std::cout << input << std::endl;
    else if (!input.compare("SEARCH"))
        std::cout << input << std::endl;
}

std::string UserInterface::getInput(void)
{
    std::string input;

    getline(std::cin >> std::ws, input);
    return (input);
}