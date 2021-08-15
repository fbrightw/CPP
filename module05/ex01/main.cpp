#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdlib.h>

void bla()
{
    std::cout << "unexpected" << std::endl;
    exit(0);
}

int main()
{

    Bureaucrat  Nick("Nick", 12);
    std::set_unexpected(&bla);

    try {
        Bureaucrat Jack("Jack", 160);
        Jack.GoDecrement();
        Jack.GoDecrement();
        Nick.GoIncrement();
        for (int i = 0; i < 100; i++)
            Nick.GoIncrement();
    }
    catch  (std::exception &e) {
       std::cout << e.what() << std::endl;
    }

    std::cout << Nick << std::endl;
    Form form1("form1", 100, 50, 0);
    Form form2("form1", 110, 30, 0);
    Form form3("form1", 40, 120, 0);
    Form form4("form1", 10, 40, 0);

    try {

        form1.beSigned(Nick);
        form2.beSigned(Nick);
        form3.beSigned(Nick);
        form4.beSigned(Nick);
    }
    catch  (std::exception &e) {
       std::cout << e.what() << std::endl;
    }
    
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    std::cout << form3 << std::endl;
    std::cout << form4 << std::endl;

}