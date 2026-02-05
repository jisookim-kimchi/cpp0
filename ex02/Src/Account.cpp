#include "../Header/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int Account::getTotalAmount( void )
{
    return _totalAmount;
}

int Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
    std::cout << "Accounts: " << getNbAccounts() << ", ";
    std::cout << "Total: " << getTotalAmount() << ", ";
    std::cout << "Deposits: " << getNbDeposits() << ", ";
    std::cout << "Withdrawals: " << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit( int deposit )
{
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
}

bool Account::makeWithdrawal( int withdrawal )
{
    if (_amount < withdrawal)
    {
        std::cout << "Money is not enough" << std::endl;
        return false;
    }
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    return true;
}

int Account::checkAmount( void ) const
{
    return _amount;
}

void Account::displayStatus( void ) const
{
    std::cout << "Account: " << _accountIndex << ", ";
    std::cout << "Amount: " << _amount << ", ";
    std::cout << "Deposits: " << _nbDeposits << ", ";
    std::cout << "Withdrawals: " << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
    std::time_t now = std::time(nullptr);
    std::cout << "[";
    std::cout << std::put_time(std::localtime(&now), "%Y-%m-%d %H:%M:%S");
    std::cout << "]";
}

Account::Account( void )
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}
