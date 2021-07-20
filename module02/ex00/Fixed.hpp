#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {

public:

	Fixed( void );
	~Fixed( void );
	Fixed(Fixed const &obj);
	Fixed &operator=(const Fixed &assigning);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw);

private:

	int					_fixedPoint_val;
	static const int	_numbFract_bits;
};

#endif