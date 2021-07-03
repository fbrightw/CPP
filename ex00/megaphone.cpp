#include <iostream>
#include <string.h>

int main(int ac, char **argv)
{
	int i = 1;
	char ch;
	size_t j = 0;
	std::string str;

	if (ac != 1)
	{
		while (i < ac)
		{
			str = argv[i];
			j = 0;
			while (j < str.length())
			{
				ch = toupper(str[j]); // Can I use?
				std::cout << ch;
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
