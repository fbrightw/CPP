#include <iostream>
#include <string.h>

class contact{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		std::string fields[5] = {"first name ", "last name ", "nickname ", "phone number ", "darkest secret "};

	void	print(int index){
		std::cout << fields[index];
	};

	void	setData(int index){
		if (index == 0)
			std::cin >> first_name;
		if (index == 1)
			std::cin >> last_name;
		if (index == 2)
			std::cin >> nickname;
		if (index == 3)
			std::cin >> phone_number;
		if (index == 4)
			std::cin >> darkest_secret;
	};

	void	printSpaces(int k){
		for (int i = 0; i < k; i++)
			std::cout << " ";
	}

	int	checkSize(std::string str)
	{
		if (str.length() > 10)
		{
			str.resize(9);
			std::cout << str << ".";
			return (1);
		}
		std::cout << str;
		printSpaces(10 - str.length());
		return (0);
	}

	void	printContent(int index){
		std::cout << index;
		printSpaces(9);
		checkSize(first_name);
		checkSize(last_name);
		checkSize(nickname);
		std::cout << std::endl;
	}
};
