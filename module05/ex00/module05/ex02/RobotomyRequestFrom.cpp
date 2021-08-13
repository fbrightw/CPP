#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target) {
    // if ()
    std::cout << "Bzzz..... Bdish... some noises that I can't sound" << std::endl;
    std::cout << _target << "has been robotomized successfully 50% of the time. " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &another) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &anither) {}