#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form {

    private:
        std::string _name;
        int         _gradeForSign;
        int         _gradeForExec;
        bool        _isSigned;

    public:
        Form( void );
        Form (std::string name, int gradeToSign, int gradeToExecute, bool isSigned);
        ~Form(void );
        Form &operator=(Form const &another);
        Form(Form const &another);
 
        std::string     getName() const;
        int             getG_Sign() const;
        int             getG_Exec() const;
        bool            getwhetherSigned() const;

        void            beSigned(Bureaucrat &a);

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw(); 
        };

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw(); 
        };
};

std::ostream	&operator<<(std::ostream &out, const Form &obj);

#endif