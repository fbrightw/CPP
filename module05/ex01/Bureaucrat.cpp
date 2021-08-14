#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("no name"), _grade(0) { }

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
    if (this->_grade > 150)
        throw GradeTooLowException();
    if (this->_grade < 1)
        throw GradeTooHighException();
} 

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(const Bureaucrat &another) { *this = another; }

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &another)
{
    this->_grade = another.getGrade();
	this->_name = another.getName();
	
	return *this;
}

std::string Bureaucrat::getName() const { return (_name); }

int         Bureaucrat::getGrade() const { return (_grade); }

void         Bureaucrat::GoIncrement() { _grade -= 1; }

void         Bureaucrat::GoDecrement() { _grade += 1; }

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{ 
	return ("Grade too low");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bur)
{
    out << bur.getName() << " , bureaucrat grade" << bur.getGrade() << " ." << std::endl;
}

void            Bureaucrat::signForm(Form &a)
{
    try
	{
		a.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " cannot sign " << a.getName() << " because' "
			<< e.what() << std::endl;
	}
}
