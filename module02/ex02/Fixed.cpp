#include "Fixed.hpp"

const int Fixed::_numbFract_bits = 8;

Fixed::Fixed()
{
	_fixedPoint_val = 0;
}

Fixed::Fixed(const int nmbr)
{
	_fixedPoint_val = nmbr * (1 << Fixed::_numbFract_bits);

}

Fixed::Fixed(const float nmbr)
{
	_fixedPoint_val = (roundf)(nmbr * (1 << Fixed::_numbFract_bits));
}

Fixed::Fixed(Fixed const &obj)
{
	*this = obj;
}

Fixed::~Fixed() { }

int		Fixed::getRawBits (void) const
{
	return (_fixedPoint_val);
}

void	Fixed::setRawBits( int const raw) { _fixedPoint_val = raw;}

Fixed &Fixed::operator= (const Fixed &ref)
{
	_fixedPoint_val = ref.getRawBits();
	return (*this);
}

std::ostream &operator<< (std::ostream& os, Fixed const &assigning)
{
	os << assigning.toFloat();
	return (os);
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPoint_val / (float)(1 << Fixed::_numbFract_bits));
}

int		Fixed::toInt(void) const
{
	return (_fixedPoint_val / (1 << Fixed::_numbFract_bits));
}

bool	Fixed::operator>(const Fixed &ref) const { return(_fixedPoint_val > ref.getRawBits()); }

bool	Fixed::operator<(const Fixed &ref) const { return(_fixedPoint_val < ref.getRawBits()); }

bool	Fixed::operator>=(const Fixed &ref) const { return(_fixedPoint_val >= ref.getRawBits()); }

bool	Fixed::operator<=(const Fixed &ref) const { return(_fixedPoint_val <= ref.getRawBits()); }

bool	Fixed::operator==(const Fixed &ref) const { return(_fixedPoint_val == ref.getRawBits()); }

bool	Fixed::operator!=(const Fixed &ref) const { return(_fixedPoint_val != ref.getRawBits()); }

Fixed Fixed::operator+(const Fixed &ref) const {
	Fixed newOne;

	newOne.setRawBits(_fixedPoint_val + ref.getRawBits());
	return (newOne);
}

Fixed Fixed::operator-(const Fixed &ref) const {
	Fixed newOne;

	newOne.setRawBits(_fixedPoint_val - ref.getRawBits());
	return (newOne);
}

Fixed Fixed::operator*(const Fixed &ref) const {
	Fixed newOne;

	newOne.setRawBits(_fixedPoint_val * ref.getRawBits()>>Fixed::_numbFract_bits);
	return (newOne);
}

Fixed Fixed::operator/(const Fixed &ref) const {
	Fixed newOne;

	newOne.setRawBits(_fixedPoint_val / ref.getRawBits());
	return (newOne);
}

Fixed &Fixed::operator++()
{
	_fixedPoint_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed newOne = *this;
	++*this;
	return (newOne);
}

Fixed &Fixed::operator--()
{
	_fixedPoint_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed newOne = *this;
	--*this;
	return (newOne);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) { return ((a < b) ? a : b); }

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) { return ((a < b) ? a : b); }

Fixed	&Fixed::max(Fixed &a, Fixed &b) { return ((a > b) ? a : b); }

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) { return ((a > b) ? a : b); }
