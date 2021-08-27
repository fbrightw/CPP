#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void    toPrint(const T &src){
    std::cout << src << std::endl;
}

template<typename T>
void iter(const T *arr, int length, void func(const T &src)) {
    for (int i = 0; i < length; i++)
        func(arr[i]);
};

#endif