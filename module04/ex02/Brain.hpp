#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Brain {
	public:
		Brain( void );
		~Brain( void );
		Brain(Brain const &another);
		// Brain &operator=(const Brain &assigning);
		std::string ideas[100];
		void setRandomWords();
};

#endif