#include "Cast.hpp"

Cast::Cast( void ) {}

Cast::~Cast( void ) {}

Cast::Cast(std::string const &nmbr) {
    if (nmbr.length() == 1 && isprint(*(nmbr.c_str())) && !(isdigit(*(nmbr.c_str()))))
        this->_nmbr = static_cast<double>(*(nmbr.c_str()));
    else {
        this->_nmbr = std::atof(nmbr.c_str());
    }

	this->_lenght = nmbr.length();	

	if (nmbr == "nan" || nmbr == "nanf")
		this->_isNan = true;
	else
		this->_isNan = false;

	if (nmbr == "+inf" || nmbr == "+inff")
		this->_isPlusInf = true;
	else
		this->_isPlusInf = false;

	if (nmbr == "-inf" || nmbr == "-inff")
		this->_isMinusInf = true;
	else 
		this->_isMinusInf = false;
	
	if (this->_nmbr - static_cast<int>(this->_nmbr) == 0.0000)
		this->_isZero = true;
	else
		this->_isZero = false;
    
    cast_toChar();
    cast_toInt();
    cast_toFloat();
    cast_toDouble();
}

Cast & Cast::operator=(Cast const &another) {
	this->_nmbr = another.getNmbr();
	this->_lenght = another.getLenght();
	this->_isNan = another.getIsNan();
	this->_isPlusInf = another.getIsPlusInf();
	this->_isMinusInf = another.getIsMinusInf();
	this->_isZero = another.getIsZero();
	return *this; 
}


void     Cast::cast_toChar() {
   char	ch = static_cast<char>(this->_nmbr);

	std::cout << "char: ";
	if (this->_nmbr < 0 || this->_nmbr > 255
		|| this->_isPlusInf || this->_isMinusInf || this->_isNan)
		std::cout << "impossible" << std::endl;
	else if (isprint(ch))
		std::cout << "'" << ch << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void      Cast::cast_toInt() {
    if (this->_nmbr > INT_MAX || this->_nmbr < INT_MIN
	|| this->_isMinusInf || this->_isNan || this->_isPlusInf)
		std::cout << "impossible" << std::endl;
	else
        std::cout << "int : " << static_cast<int>(_nmbr) << std::endl;
}

void    Cast::cast_toFloat() {
    std::cout << "float: ";
	if (this->_isNan)
		std::cout << "nan";
	else if (this->_isMinusInf)
		std::cout << "-inf";
	else if (this->_isPlusInf)
		std::cout << "+inf";
	else
		std::cout << static_cast<float>(this->_nmbr);
	if (this->_isZero)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void   Cast::cast_toDouble() {
    std::cout << "double: ";
	if (this->_isNan)
		std::cout << "nan";
	else if (this->_isMinusInf)
		std::cout << "-inf";
	else if (this->_isPlusInf)
		std::cout << "+inf";
	else
		std::cout << static_cast<double>(this->_nmbr);
	if (this->_isZero)
		std::cout << ".0";
	std::cout << std::endl;
}

double Cast::getNmbr() const {
	return this->_nmbr;
}

int Cast::getLenght() const {
	return this->_lenght;
}

bool Cast::getIsNan() const {
	return this->_isNan;
}

bool Cast::getIsPlusInf() const {
	return this->_isPlusInf;
}

bool Cast::getIsMinusInf() const {
	return this->_isMinusInf;
}

bool Cast::getIsZero() const {
	return this->_isZero;
}