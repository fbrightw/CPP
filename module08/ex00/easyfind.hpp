#include <algorithm>

class NotFound: public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Value is not found";
			}
	};

template <typename T>
typename T::const_iterator easyfind(T &container, int value) {
	typename T::const_iterator res;

	res = container.begin();
    while (res != container.end()) {
		if (*res == value)
			return res;
        res++;
    }
	throw NotFound();
}
