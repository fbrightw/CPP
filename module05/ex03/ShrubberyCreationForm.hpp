#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm(ShrubberyCreationForm const &another);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &anither);

        void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif