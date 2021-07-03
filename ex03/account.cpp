#include "account.hpp"

int _nbAccounts = 0;
int _accountIndex = 0;
int _totalAmount = 0;
int _totalNbDeposits = 0;
int _totalNbWithdrawals = 0;

void	Account::displayAccountsInfos()
{
	// Account::_displayTimestamp();
	std::cout << "accounts : " << _nbAccounts << ";";
	std::cout << "total : " << _totalAmount << ";";
	std::cout << "deposits : " << _totalNbDeposits << ";";
	std::cout << "withdrawls : " << _totalNbWithdrawals << ";";
}

// void	Account::~Account()
// {

// }

int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

// Account::_displayTimestamp()
// {
// 	time_t rawtime;
// 	struct tm * timeinfo;

// 	time (&rawtime);
// 	timeinfo = localtime (&rawtime);
// 	printf ("Current local time and date: %s", asctime(timeinfo));

// 	return 0;
// }

Account::Account( int initial_deposit )
{
	_accountIndex++;
	_nbAccounts++;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_amount = initial_deposit;
	_totalAmount = Account:: _amount;
	// Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _totalAmount << ";";
	std::cout << "created" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	// Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << Account::getTotalAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	Account::_totalAmount = _amount;
	std::cout << "amount:" << Account::getTotalAmount()<< ";";
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << Account::getNbDeposits() << ";";
}

bool	makeWithdrawal(int withdrawal)
{
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	if (Account::getTotalAmount() < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";";
	// _amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "nb_withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_totalAmount > 0);
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
