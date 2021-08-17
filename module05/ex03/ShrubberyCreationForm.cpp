#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form() { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form(target, 145, 137, false) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &another) : Form(another) {  }

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &another) {
    Form::operator=(another);
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > Form::getG_Exec())
        throw Form::ExecuteTooHighException();
    if (!(Form::getwhetherSigned()))
        throw Form::FormIsNotSignedException();
    std::ofstream file(this->getName() + "_shrubbery");
    file << "                            .o00o          " << std::endl
            <<  "                     o000000oo            " << std::endl  
            <<  "                    00000000000o          " << std::endl 
            <<  "                   00000000000000         " << std::endl
            <<  "                 oooooo  00000000  o88o   " << std::endl
            <<  "              ooOOOOOOOoo  ```''  888888  " << std::endl
            <<  "            OOOOOOOOOOOO'.qQQQQq. `8888'  " << std::endl
            <<  "           oOOOOOOOOOO'.QQQQQQQQQQ/.88'   " << std::endl
            <<  "          OOOOOOOOOO'.QQQQQQQQQQ/ /q      " << std::endl
            <<  "          OOOOOOOOO QQQQQQQQQQ/ /QQ       " << std::endl
            <<  "          OOOOOOOOO `QQQQQQ/ /QQ'         " << std::endl
            <<  "           OO:F_P:O `QQQ/  /Q'            " << std::endl
            <<  "              \\. \\ |  // |               " << std::endl
            <<  "              d\\ \\\\|_////                " << std::endl
            <<  "              qP| \\ _' `|Ob              " << std::endl
            <<  "                 \\  / \\  \\Op              " << std::endl
            <<  "                 |  | O| |                " << std::endl
            <<  "           _       /\\. \\_/ /\\             " << std::endl
            <<  "            `---__/|_\\   //|  __         " << std::endl
            <<  "                  `-'  `-'`-'-'           " << std::endl;
}