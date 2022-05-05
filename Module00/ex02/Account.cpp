/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:18:06 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/05 15:01:59 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	this->_amount = initial_deposit;
	this->_accountIndex = getNbAccounts();
	this->_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount() << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount() << ";closed" << std::endl;
}

int Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits++;
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";deposit:" << deposit
	<< ";amount:" << (this->checkAmount() + deposit)
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	
	_totalNbDeposits++;
	_totalAmount += deposit;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";withdrawal:";
	
	if (withdrawal > this->checkAmount()) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	
	std::cout << withdrawal <<";amount:" << (this->checkAmount() - withdrawal)
	<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t	now;
	tm		*ts;

	now = time(0);
	ts = localtime(&now);
	std::setfill(0);
	std::cout << "[" << (1900 + ts->tm_year)
	<< std::setfill('0') << std::setw(2) << (1 + ts->tm_mon)
	<< std::setfill('0') << std::setw(2) << ts->tm_mday 
	<< "_"
	<< std::setfill('0') << std::setw(2) << ts->tm_hour
	<< std::setfill('0') << std::setw(2) << ts->tm_min
	<< std::setfill('0') << std::setw(2) << ts->tm_sec 
	<< "] ";
}
