#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form() { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form(target, 145, 137, false) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &another) : Form(another) {  }

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &another) {
    Form::operator=(another);
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!(executor.getGrade() < Form::getG_Exec()))
        throw Form::ExecuteTooHighException();
    if (!(Form::getwhetherSigned()))
        throw Form::FormIsNotSignedException();
    std::ofstream file(getName() + "_shrubbery");

    file << " " << 
}