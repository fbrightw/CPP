
class phonebook{
	contact people[8];
	void	AddContact(contacts person){
		int i = 0;
		while (people[i])
			i++;
		people[i] = person;
	};
};
