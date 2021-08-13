#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat Ann("Ann", 160);
        Form        Her("Ann", 120, 30, 0);
    }
    catch  (std::exception &e) {
       std::cout << e.what() << std::endl;
    }
}