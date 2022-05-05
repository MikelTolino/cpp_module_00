/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:53:03 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/05 14:08:05 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}
// accounts:8;total:20049;deposits:0;withdrawals:0

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdraws:" << _totalNbWithdrawals << "\n";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	if (initial_deposit > 0)
	{
		_amount = initial_deposit;
		_totalAmount += _amount;
	}
	else
		_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created\n";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed\n";
	return;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	if (deposit > 0)
	{
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "deposit:" << deposit << ";";
		_amount += deposit;
		std::cout << "amount:" << _amount << ";";
		_totalAmount += deposit;
		_nbDeposits++;
		_totalNbDeposits++;
		std::cout << "nb_deposits: " << _nbDeposits << "\n";
	}
	else
		std::cout << "Deposit fails, try again\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	if (withdrawal > 0 && _amount >= withdrawal)
	{
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "nb_withdrawals: " << _nbWithdrawals << "\n";
		return (true);
	}
	else
	{
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:refused\n";
		return (false);
	}
}

int Account::checkAmount(void) const
{
	return _amount;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdraws:" << _nbWithdrawals << "\n";
}

void Account::_displayTimestamp(void)
{
	std::time_t result = std::time(nullptr);
	char ptr[64];

	std::strftime(ptr, 64, "%G%m%d_%H%M%S" , std::localtime(&result));
	std::cout << "[" << ptr << "] ";
}