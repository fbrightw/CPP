#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::~Intern( void ) {}

Intern::Intern(Intern const &another) {}

Intern::Intern(const Intern &another) {}

Intern & Intern::operator=(Intern const &antoher) {}

Form *form1(const std::string &target) { return (new PresidentialPardonForm(target)); }

Form *form2(const std::string &target)  { return (new RobotomyRequestForm(target)); }

Form *form3(const std::string &target) { return (new ShrubberyCreationForm(target)); }

const char	*Intern::WrongForm::what() const throw()
{
	return ("Wrong Form");
}

Form *Intern::makeForm(std::string formName, std::string target) {
    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery cretion"};
    Form *(*realForms[3])(const std::string &) = {form1, form2, form3};
    for (int i = 0; i < 4; i++)
    {
        if (forms[i] == formName)
        {
            std::cout << "Intern creates " << forms[i] << std::endl;
            return (realForms[i](target));
        }
    }
    throw WrongForm();
    
}