#include <iostream>
#include <string.h>
#include "contacts.hpp"
#include "phonebook.hpp"

int main(int ac, char **argv)
{
	int i = 0;
	std::string str;
	std::string fields;

	phonebook PhoneBook;
	std::getline(std::cin, str);
	while (str != "EXIT")
	{
		if (str == "ADD")
		{
			contacts contact;
			i = 0;
			while (i < 5)
			{
				contact.printFields(i);
				getline(std::cin, fields);
				contact.setData(fields, i);
				i++;
			}
			PhoneBook.AddContact(contact);
		}
		// if (str == "SEARCH")
	}
	return (0);
	//quit
}
