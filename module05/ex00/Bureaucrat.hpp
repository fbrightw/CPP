#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

    private:
        std::string const _name;
        int _grade;
    
    public:
        Bureaucrat( void );
        Bureaucrat(std::string const name, int grade);
        // ~Bureaucrat( void );
        int GradeTooHighException();
        int GradeTooLowException();
        std::string getName();
        int         getGrade();
        void GoIncrement();
        void GoDecrement();
};

#endif