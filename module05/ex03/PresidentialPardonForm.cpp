#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form() {  }

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), Form(target, 25, 5, false) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &another) {
    
    Form::operator=(another);
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &another) : Form(another) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if ((executor.getGrade() > Form::getG_Sign()))
        throw GradeTooHighException();
    if (!(Form::getwhetherSigned()))
        throw GradeTooLowException();
    std::cout <<_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}