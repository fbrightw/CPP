#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat  Nick("Nick", 135);
    ShrubberyCreationForm floor("floor");
    PresidentialPardonForm heaven("heaven");
    RobotomyRequestForm robot("robot");
    try {
        Bureaucrat Jack("Jack", 160);
        floor.beSigned(Jack);
        heaven.beSigned(Jack);
        robot.beSigned(Jack);

        floor.beSigned(Nick);
        heaven.beSigned(Nick);
        robot.beSigned(Nick);
    }
    catch  (std::exception &e) {
       std::cout << e.what() << std::endl;
    }

    try {
        floor.execute(Nick);
        heaven.execute(Nick);
        robot.execute(Nick);
    }
    catch  (std::exception &e) {
       std::cout << e.what() << std::endl;
    }
}
