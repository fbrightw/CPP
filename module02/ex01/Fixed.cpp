#include "Fixed.hpp"

const int Fixed::_numbFract_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint_val = 0;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int nmbr)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint_val = nmbr * (1 << Fixed::_numbFract_bits);
}

Fixed::Fixed(const float nmbr)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint_val = (roundf)(nmbr * (1 << Fixed::_numbFract_bits));
}

int		Fixed::getRawBits (void) const
{
	return (_fixedPoint_val);
}

void	Fixed::setRawBits( int const raw) { _fixedPoint_val = raw;}

Fixed &Fixed::operator= (Fixed const &assigning)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedPoint_val = assigning.getRawBits();
	return (*this);
}

std::ostream &operator<< (std::ostream& os, Fixed const &assigning)
{
	os << assigning.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPoint_val / (float)(1 << Fixed::_numbFract_bits));
}

int		Fixed::toInt(void) const
{
	return (_fixedPoint_val / (1 << Fixed::_numbFract_bits));
}
