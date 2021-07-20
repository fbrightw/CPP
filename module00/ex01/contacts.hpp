#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class Contact{

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	std::string	index_str;

public:

	void		setFirstName();
	void		setLastName();
	void		setNickname();
	void		setPhoneNmbr();
	void		setDarkestSecret();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
};

#endif