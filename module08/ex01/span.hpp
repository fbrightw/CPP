#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>

class Span {
    public:
        Span(unsigned int N);
        ~Span();

        void addNumber(int value);
        template<typename T>
        void    addNumber(T begin, T end) {
            if (this->_iter == this->_len)
			    throw Span::AddNumberError();
            int i = 0;
            for (std::vector<int>::iterator it = begin ; it != end; ++it) {
                this->_arr[i++] = *it;
                this->_iter++;
		    }	
        }

        class AddNumberError: public std::exception {
		    public:
                virtual const char *what() const throw() {
                    return "Array is full";
                }
	    };

        unsigned int longestSpan();
        unsigned int shortestSpan();
    private:
        unsigned int        _N;
        std::vector<int>	_arr;
        unsigned int        _len;
        unsigned int        _index;
};

#endif