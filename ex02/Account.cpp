#include <iostream>
#include "./Account.hpp"

Account::Account()
{

}

Account::Account(int initial_deposit)
{

}

Account::~Account()
{

}

static int	Account::getNbAccounts( void )
{
   return (_nbAccounts);
}

static int	Account::getTotalAmount( void )
{
   return (_totalAmount)
}

static int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits)
}

static int	Account::getNbWithdrawals( void )
{

}

static void	Account::displayAccountsInfos( void )
{
    //display current time;
  std::cout << "accounts:" << getNbAccounts();
  std::cout << "total:" << getTotalAmount();
  std::cout << "deposits:" << getNbDeposits();
  std::cout << "withdrawals:" << getNbWithdrawals();

}

void	Account::makeDeposit( int deposit )
{
    _accountIndex++;
    _nbAccounts++;
    _amount += deposit;
    _totalAmount+=depos
    _totalNbDeposits++;
    _nbDeposits++;

}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{
     //display current time;
    std::cout << "index:" << _accountIndex;
    std::cout << "amount:" << _amount;
    std::cout <<  "deposits:" << _nbDeposits;
    std::cout << "withdrawals" << _nbWithdrawals;
}

static void Account::_displayTimestamp(void)
{
    std::chrono::system_clock::time_point currentTime = std::chrono::system_clock::now();
    std::cout<< std::ctime(&currentTime_t);
}

