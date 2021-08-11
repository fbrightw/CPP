#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("no name"), _grade(0) { }

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {} 

std::string Bureaucrat::getName() { return (_name); }

int         Bureaucrat::getGrade() { return (_grade); }

void         Bureaucrat::GoIncrement() { _grade -= 1; }

void         Bureaucrat::GoDecrement() { _grade += 1; }

int Bureaucrat::GradeTooHighException()
{
    std::cout << "too high grade" << std::endl;
    return (_grade);
}

int Bureaucrat::GradeTooLowException()
{
    std::cout << "too low grade" << std::endl;
    return (_grade);
}
