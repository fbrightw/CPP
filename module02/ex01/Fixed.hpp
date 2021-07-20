#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed( void );
	Fixed(const int nmb);
	Fixed(const float nbr);
	~Fixed( void );
	Fixed(Fixed const &obj);
	Fixed &operator= (Fixed const &assigning);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_fixedPoint_val;
	static const int	_numbFract_bits;
};

std::ostream &operator<< (std::ostream& os, Fixed const &assigning);
#endif