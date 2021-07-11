#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = str;

	stringPTR = &str;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}