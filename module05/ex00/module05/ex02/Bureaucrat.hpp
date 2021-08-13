#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat {

    private:
        std::string _name;
        int _grade;
    
    public:
        Bureaucrat( void );
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat( void );
        Bureaucrat(const Bureaucrat &another);
        Bureaucrat& operator=(Bureaucrat const &antoher);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        std::string getName() const;
        int         getGrade() const;
        void GoIncrement();
        void GoDecrement();

        void            signForm(Form &a);
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bur);

#endif