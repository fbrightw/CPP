#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat Jack("Jack", 160);
        // Form        Ann("Ann", 120, 30, 0);
    }
    catch  (std::exception &e) {
       std::cout << e.what() << std::endl;
    }
}
