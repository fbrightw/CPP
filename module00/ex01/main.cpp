#include <iostream>
#include <string.h>
#include "phonebook.hpp"

int main(int ac, char **argv)
{
	int k = 0;
	std::string str;

	phonebook PhoneBook;
	while (1)
	{
		std::cout << "write one of the options: ADD SEARCH EXIT" << std::endl;
		std::cin >> str;
		if (str == "ADD")
		{
			PhoneBook.AddContact(k);
			k++;
		}
		else if (str == "SEARCH")
			PhoneBook.Show(k);
		else if (str == "EXIT")
			return (0);
	}
	return (0);
}
