#include "Account.class.hpp"
# include <iomanip>
# include <iostream>
# include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) : _amount(initial_deposit) {
	this->_bonus = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	++this->_nbAccounts;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_nbAccounts - 1 << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account()
{
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	--this->_nbAccounts;
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int Account::getBonus() {
    return _bonus;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
        _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	++this->_nbDeposits;
	++this->_totalNbDeposits;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit <<
        ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount > withdrawal)
	{
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		++this->_nbWithdrawals;
		++this->_totalNbWithdrawals;
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex <<
		";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount <<
		";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex <<
		";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
}

int		Account::checkAmount() const
{
	++this->_bonus;
	return _amount;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<
	";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t now = time(0);

	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << 1 + ltm->tm_mon;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << ltm->tm_mday << "_";
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << 1 + ltm->tm_hour;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << 1 + ltm->tm_min;
	std::cout << std::setfill ('0') << std::setw (2);
	std::cout << 1 + ltm->tm_sec << "]";
}