#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat first("Jack", 0);
    Bureaucrat second("Jack", 160);    
    try {
        first.GoIncrement();
        second.GoDecrement();
    }
    catch (std::exception &e) {
       std::cout << e.what() << std::endl;
    }
    std::cout << second << std::endl;
}
