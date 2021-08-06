#include "Brain.hpp"

Brain::Brain( void )
{
	// std::cout << "constructor of Brain class" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "destructor of Brain class" << std::endl;
}

Brain::Brain(Brain const &another)
{
	*this = another;
}

// Brain &Brain::operator=(const Brain &assigning)
// {
// 	return (*this);
// }

void	Brain::setRandomWords()
{
	int arr_seize = 100;
	int	w_length = 5;
	while(--arr_seize >= 0) {
		int stringLen = (rand() % w_length) + 1; // getting random length
		std::string s = ""; // taking null string
		for(int i = 0; i < stringLen; i++) {
			if(rand() % 2 == 0 ) { // capital or small letter
				s += 'A' + (rand() % 26);
			} else{
				s += 'a' + (rand() % 26);
			}
		}
		ideas[arr_seize] = s;
	}
}
