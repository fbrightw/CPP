#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    public:
        Intern( void );
        ~Intern( void );
        Intern(Intern const &another);
        Intern& operator=(Intern const &antoher);

        Form*  makeForm(std::string formName, std::string target);
        class WrongForm : public std::exception {
            public:
                virtual const char *what() const throw(); 
        };
};

#endif