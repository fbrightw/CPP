#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form() { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), Form(target, 72, 45, false) { }

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &another) : Form(another) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &another) {
    Form::operator=(another);
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!(executor.getGrade() < Form::getG_Exec()))
        throw Form::ExecuteTooHighException();
    if (!(Form::getwhetherSigned()))
        throw Form::FormIsNotSignedException();
    std::cout << "Bzzz..... Bdish... some noises that I can't sound" << std::endl;
    if (rand() % 2 ) {
        std::cout << _target << "has been robotomized successfully 50% of the time. " << std::endl;
    }
    else
        std::cout << "it's a failure" << std::endl;
}