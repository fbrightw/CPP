#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form() { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form(target, 145, 137, false) {
    // need to create file with shrubbery
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &another) {  }

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &another) {
    Form::operator=(another);
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!(executor.getGrade() < Form::getG_Sign()))
        throw GradeTooLowException();
    if (!(Form::getwhetherSigned()))
        throw GradeTooLowException();
}