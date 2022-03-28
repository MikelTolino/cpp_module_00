/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:53:03 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/03/28 20:58:22 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {

	return _nbAccounts;
}

int  Account::getTotalAmount(void)
{
	return _totalAmount;
}

int  Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int  Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}
//accounts:8;total:20049;deposits:0;withdrawals:0

void  Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdraws:" << _totalNbWithdrawals << ";\n";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	if (initial_deposit > 0)
		_amount = initial_deposit;
	else
		_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account( void ) {
	return ;
}


void Account::makeDeposit(int deposit) {

	if (deposit > 0)
		_amount += deposit;
	else
		std::cout << "Deposit fails, try again\n";
}

bool Account::makeWithdrawal(int withdrawal) {

	if (withdrawal > 0 && _amount >= withdrawal)
	{
		_amount -= withdrawal;
		return (true);
	}
	else
		return (false);
}

int	Account::checkAmount(void) const {

	return _amount;
}

void	Account::displayStatus( void ) const {

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created\n";
}

void	Account::_displayTimestamp(void) {

    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";

}