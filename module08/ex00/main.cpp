#include "easyfind.hpp"
#include <vector>
#include <iostream>


int main()
{
    std::vector<int> first;
     for (int i = 1; i <= 10; i++)
        first.push_back(i * 10);
    try {
        easyfind(first, 10);
    }
    catch (std::exception &e) {
       std::cout << e.what() << std::endl;
    }
}
