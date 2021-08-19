#ifndef CAST_HPP
#define CAST_HPP

#include <iostream>
#include <climits>
#include <stdlib.h>  

class Cast {
    public:
        Cast( void );
        ~Cast( void );
        Cast(std::string const &nmbr);
        Cast(const Cast &another);
        Cast &operator=(Cast const &another);

        double	getNmbr() const;
        void    cast_toChar();
        void    cast_toInt();
        void    cast_toFloat();
        void    cast_toDouble();

        int		getLenght() const;
        bool	getIsNan() const;
        bool	getIsPlusInf() const;
        bool	getIsMinusInf() const;
        bool	getIsZero() const;

    private:
        double	_nmbr;
        int		_lenght;
        bool	_isNan;
        bool	_isPlusInf;
        bool	_isMinusInf;
        bool	_isZero;
};

#endif