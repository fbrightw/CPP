#include "Bureaucrat.hpp"

int main()
{
    try {
        // Bureaucrat first("Jack", 0);
        Bureaucrat second("Jack", 160);
    }
    catch (std::exception &e) {
       std::cout << e.what() << std::endl;
    }

}
