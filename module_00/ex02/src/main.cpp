/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:50:32 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/17 16:12:16 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

class Account;

int main (void)
{

    Account a(100);
    Account a1(100);
    Account a2(100);

    Account::getNbAccounts();
    //std::cout << "hello world" << std::endl;
    return (0);
}