#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form() {  }

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), Form(target, 25, 5, false) {

    std::cout <<_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &another) {
    
    this->_target = another._target; 
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &another) {
    *this = another;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!(executor.getGrade() < Form::getG_Sign()))
        throw GradeTooLowException();
    if (!(Form::getwhetherSigned()))
        throw GradeTooLowException();
}