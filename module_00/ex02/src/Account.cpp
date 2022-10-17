/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:23:41 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/17 20:38:25 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//#include <chrono>
#include <ctime>
#include "Account.hpp"


/*

https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
time_t now = time(0);
tm *time = localtime(&now);

std::cout << (1900 + time->tm_year) << "------";
   std::cout << "Month: "<< 1 + time->tm_mon;
   std::cout << "Day: "<< time->tm_mday;
   std::cout << "Time: "<< 5+time->tm_hour << ":";
   std::cout << 30+time->tm_min << ":";
   std::cout << time->tm_sec;
*/

Account::Account(int initial_deposit):
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += this->_amount;
	
	std::cout << "[19920104_091531] "
			  << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	
	std::cout << "[19920104_091531] "
			  << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "[19920104_091531] "
			  << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";"
			  << "deposit:" << deposit << ";";

	this->_amount+= deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << "amount:" << this->_amount << ";"
			  << "nb_deposits:" << this->_nbDeposits
			  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool wasMade;

	std::cout << "[19920104_091531] "
			  << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";";

	wasMade = false;
	if (this->checkAmount() > withdrawal && withdrawal > 0){
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -=  withdrawal;
		_totalNbWithdrawals++;
		wasMade = true;
	}
	if (wasMade){
		std::cout << "withdrawal:" << withdrawal << ";"
				  << "amount:" << this->_amount << ";"
				  << "nb_withdrawals:" << this->_nbWithdrawals
				  << std::endl;		
	}
	else {
		std::cout << "withdrawal:refused" << std::endl;
	}
	return (wasMade);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "[19920104_091531] "
			  << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "deposits:" << this->_nbDeposits << ";"
			  << "withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[19920104_091531] "
			  << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals
			  << std::endl;
}
