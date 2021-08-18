#include "Cast.hpp"

Cast::Cast( void ) {}

Cast::~Cast( void ) {}

Cast::Cast(double nmbr) : _nmbr(nmbr) {
    cast_toChar();
    cast_toInt();
    cast_toFloat();
    cast_toDouble();
}

void     Cast::cast_toChar() {
    std::cout << "char : " << static_cast<char>(_nmbr) << std::endl;

}

void      Cast::cast_toInt() {
    std::cout << "int : " << static_cast<char>(_nmbr) << std::endl;
}

void    Cast::cast_toFloat() {
    std::cout << "float : " << static_cast<char>(_nmbr) << std::endl;
}

void   Cast::cast_toDouble() {
    std::cout << "double : " << static_cast<char>(_nmbr) << std::endl;
}

