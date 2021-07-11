#include "contacts.hpp"

class phonebook{
	public:
		contact people[8];

	void	AddContact(int k){
		if (k > 8)
			k = 7;
		for (int i = 0; i < 5; i++)
		{
			people[k].print(i);
			people[k].setData(i);
		}
	}
	void	Show(int k)
	{
		std::cout << "index     " << "fist name " << "last name " << "nickname  " << std::endl;
		for (int i = 0 ; i < k; i++)
			people[i].printContent(i);
	}
};
