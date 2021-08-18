#include "Cast.hpp"
#include <stdlib.h>  

int main(int ac, char **argv)
{
    if (ac > 2 || ac == 1)
    {
        std::cout << "Wrong input" << std::endl;
        return (1);
    }
    
    double nmbr = std::atof(argv[1]);
    
    // std::cout << nmbr << std::endl;
    Cast converting(nmbr);

}