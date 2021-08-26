#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void    toPrint(T const &src) {
    std::cout << src << std::endl;
}

template<typename T>
void iter(T &arr, int length, void f(const T &src)) {
    for (int i = 0; i < length; i++)
        f(arr[i]);
}


#endif