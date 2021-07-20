#include "Fixed.hpp"

int _numbFract_bits = 8;

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

int		Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint_val);
}

void	Fixed::setRawBits( int const raw) { _fixedPoint_val = raw;}

Fixed &Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedPoint_val = ref.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

