#include <iostream>
#include <string.h>

class contacts{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	void	printFields(int index){
		std::string fields[5] = {"first name ", "last name ", "nickname ", "phone number ", "darkest secret "};
		std::cout << fields[index];
	};

	void	setData(std::string fields, int index){
		if (index == 0)
			first_name = fields;
		if (index == 1)
			last_name = fields;
		if (index == 2)
			nickname = fields;
		if (index == 3)
			phone_number = fields;
		if (index == 4)
			darkest_secret = fields;
	};
};
