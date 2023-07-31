#include <iostream>
#include "./Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{

}

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_totalAmount+= initial_deposit;
    this->_amount += initial_deposit;
    this->_nbWithdrawals = 0;
    this->_nbDeposits = 0;
    //display time 
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amout:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    //display time
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amout:" << this->_amount << ";" ;
    std::cout << "colsed:" << std::endl;
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    this->_accountIndex = 0;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

}

 int	Account::getNbAccounts( void )
{
   return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
   return (_totalAmount);
}

 int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

 int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

 void	Account::displayAccountsInfos( void )
{
    //display current time;
  std::cout << "accounts:" << getNbAccounts() << ";"; 
  std::cout << "total:" << getTotalAmount() << ";";
  std::cout << "deposits:" << getNbDeposits() << ";";
  std::cout << "withdrawals:" << getNbWithdrawals();
  std::cout << std::endl;

}

void	Account::makeDeposit( int deposit )
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amout:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << "amount:" <<  this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits;
    std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if(withdrawal > this->_amount)
    {
        //display time;
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout<< "withdrawals:" << "refused";
        std::cout << std::endl;
        return (false);
    }
    else
    {
        //display time;
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->_amount << ";";
        std::cout<< "withdrawals:" << withdrawal << ";";
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
        std::cout << std::endl ;
        return (true);  
    }

}

int		Account::checkAmount( void ) const
{
    return(0);
}

void	Account::displayStatus( void ) const
{
    //display time 
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}

void Account::_displayTimestamp(void)
{

}

