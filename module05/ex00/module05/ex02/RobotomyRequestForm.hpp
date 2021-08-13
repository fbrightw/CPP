#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"

class RobotomyRequestForm : public Form{
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm( void );
        RobotomyRequestForm(RobotomyRequestForm const &another);
        RobotomyRequestForm &operator=(RobotomyRequestForm &anither);
        void execute(Bureaucrat const & executor) const;

    private:
        std::string     _target;
};

#endif