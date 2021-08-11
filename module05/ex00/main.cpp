#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat first("Jack", 0);
    int grade = first.getGrade();

    try {
        if (grade > 150)
            throw first.GradeTooLowException();
        if (grade < 1)
            throw first.GradeTooHighException();
    }
    catch (std::exception &e) {
       std::cout << "end of exception" << std::endl;
    }

}
