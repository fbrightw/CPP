#include <iostream>
#include "Phonebook.hpp"

int main(int ac, char **argv)
{
	std::string	str;

	Phonebook	phonebook;
	while (1) {
		std::cout << "write one of the options: ADD SEARCH EXIT" << std::endl;
		getline(std::cin, str);
		if (str == "ADD") {
			phonebook.AddContact();
			std::cin.ignore();
		}
		else if (str == "SEARCH")
			phonebook.Show();
		else if (str == "EXIT")
			return (0);
		else
			std::cout << "There is a mistake, try again\n";
	}
	return (0);
}
