#include "Form.hpp"

Form::Form( void ) {}

Form::~Form(void ) {}

Form::Form (std::string name, int gradeToSign, int gradeToExecute, bool isSigned) :
    _name(name), _gradeForSign(gradeToSign), _gradeForExec(gradeToExecute), _isSigned(isSigned) 
{
    if (!((_gradeForSign && _gradeForExec)) < 150 )
        throw GradeTooLowException();
    if (!((_gradeForSign && _gradeForExec)) > 0 )
        throw GradeTooHighException();
}

Form & Form::operator=(Form const &another)
{
    this->_name = another.getName();
	this->_isSigned = another.getwhetherSigned();
    this->_gradeForSign = another.getG_Sign();
    this->_gradeForExec = another.getG_Exec();

	return *this;
}

Form::Form(Form const &another) { *this = another; }

std::string     Form::getName() const { return this->_name; }
int             Form::getG_Sign() const{ return this->_gradeForSign; }
int             Form::getG_Exec() const{ return this->_gradeForExec; }
bool            Form::getwhetherSigned() const{ return this->_isSigned; }

void            Form::beSigned(Bureaucrat &a) 
{
    if (a.getGrade() <= this->_gradeForSign)
        this->_isSigned = true;
    if (a.getGrade() > 150)
        throw GradeTooLowException();
}

const char	*Form::GradeTooLowException::what() const throw()
{ 
	return ("Grade too low");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
    if (form.getwhetherSigned())
		out << form.getName() << " form is signed. ";
	else
		out << form.getName() << " form is not signed. ";
}
