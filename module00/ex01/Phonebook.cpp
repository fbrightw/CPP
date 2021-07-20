#include "Phonebook.hpp"

Phonebook::Phonebook() : _contact_index(0), _contact_limit (8), _TableWidth (10) {}

void	Phonebook::AddContact()
{
	if (_contact_index > _contact_limit)
		_contact_index = _contact_limit - 1;
	people[_contact_index].setFirstName();
	people[_contact_index].setLastName();
	people[_contact_index].setPhoneNmbr();
	people[_contact_index].setNickname();
	people[_contact_index].setDarkestSecret();
	_contact_index++;
}

int		Phonebook::CorrectFormat(std::string str)
{
	if (str.length() >= _TableWidth) {
		str.resize(_TableWidth - 2);
		std::cout << str << "." << "|";
		return (1);
	}
	return (0);
}

void	Phonebook::print(std::string str)
{
	std::cout << std::setfill (' ') << std::setw (_TableWidth - 1);
	std::cout << str << "|";
}

void	Phonebook::Show()
{
	std::cout << "    index|" << "fist name|" << "last name|" << " nickname|" << std::endl;
	for (int i = 0; i < _contact_index; i++) {
		print(std::to_string(i));
		if (!CorrectFormat(people[i].getFirstName()))
			print(people[i].getFirstName());
		if (!CorrectFormat(people[i].getLastName()))
			print(people[i].getLastName());
		if (!CorrectFormat(people[i].getNickname()))
			print(people[i].getNickname());
		std::cout << std::endl;
	}
}
