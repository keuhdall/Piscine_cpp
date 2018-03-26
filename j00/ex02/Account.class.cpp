#include "Account.class.hpp"

Account::Account() {
}

Account::Account(int deposit) : _nbDeposits(deposit) {
}

Account::~Account() {
}

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
}