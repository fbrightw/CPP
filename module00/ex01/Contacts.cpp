#include "Contacts.hpp"

void	Contact::setFirstName()
{
	std::cout << "first name ";
	std::cin >> first_name;
}

void	Contact::setLastName()
{
	std::cout << "last name ";
	std::cin >> last_name;
}

void	Contact::setNickname()
{
	std::cout << "nickname ";
	std::cin >> nickname;
}

void	Contact::setPhoneNmbr()
{
	std::cout << "phone number ";
	std::cin >> phone_number;
}

void	Contact::setDarkestSecret()
{
	std::cout << "darkest secret ";
	std::cin >> darkest_secret;
}

std::string	Contact::getFirstName() { return (first_name); }
std::string	Contact::getLastName() { return (last_name); }
std::string	Contact::getNickname() { return (nickname); }
