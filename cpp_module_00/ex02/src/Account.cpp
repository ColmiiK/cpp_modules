/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:57:16 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/24 16:23:49 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;

Account::Account( int initial_deposit ){
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account ( void ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
	_nbAccounts--;
}

int Account::getNbAccounts( void ) {
	return(_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return(_totalAmount);
}

int Account::getNbDeposits( void ) {
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit( int deposit ){
	_displayTimestamp();
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > checkAmount()) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << checkAmount() - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (true);
}

int Account::checkAmount( void ) const {
	return(_amount);
}

void Account::displayStatus ( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void ) {
	std::time_t now = std::time(NULL);
	
	struct tm *timeinfo;

	char buffer[80];

	timeinfo = std::localtime(&now);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S]", timeinfo);
	
	std::cout << buffer << " ";
}