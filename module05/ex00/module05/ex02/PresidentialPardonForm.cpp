#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target) {

    std::cout <<_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &another) {
    
    this->_target = another._target; 
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &another) {
    *this = another;
}
