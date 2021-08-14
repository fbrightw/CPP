#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form() { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), Form(target, 72, 45, false) { }

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &another) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &anither) {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!(executor.getGrade() < Form::getG_Sign()))
        throw GradeTooLowException();
    if (!(Form::getwhetherSigned()))
        throw GradeTooLowException();
    if  () {
         std::cout << "Bzzz..... Bdish... some noises that I can't sound" << std::endl;
        std::cout << _target << "has been robotomized successfully 50% of the time. " << std::endl;
    }
    else
        std::cout << "it's a failure" << std::endl;
}