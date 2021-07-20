#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contacts.hpp"

class Phonebook{

public:

	void	AddContact();
	int		CorrectFormat(std::string str);
	void	print(std::string str);
	void	Show();
	Phonebook(void);

private:

	Contact	people[8];
	int		_contact_index;
	int		_contact_limit;
	int		_TableWidth;

};

#endif