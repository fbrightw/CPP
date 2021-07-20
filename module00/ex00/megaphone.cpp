#include <iostream>
#include <cstring>

int main(int ac, char **argv)
{
	std::string	str;
	char		ch;
	size_t		j = 0;

	if (ac != 1) {
		for (int i = 1; i < ac; i++) {
			if (i != 1)
				std::cout << " ";
			str = argv[i];
			j = 0;
			while (j < str.length()) {
				ch = std::toupper(str[j]);
				std::cout << ch;
				j++;
			}
		}
		std::cout << std::endl;
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}
