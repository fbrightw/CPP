#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm( void );
        PresidentialPardonForm(const PresidentialPardonForm &another);
        PresidentialPardonForm& operator=(PresidentialPardonForm const &another);

        void execute(Bureaucrat const & executor) const;
    private:
        std::string     _target;

} ;

#endif