#ifndef CAST_HPP
#define CAST_HPP

#include <iostream>

class Cast {
    public:
        Cast( void );
        ~Cast( void );
        Cast( double nmbr);

        void     cast_toChar();
        void      cast_toInt();
        void    cast_toFloat();
        void   cast_toDouble();

    private:
        double _nmbr;

};

#endif