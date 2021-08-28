#include "mutantstack.hpp"

template<class T>
Mutantstack	& Mutantstack<T>::operator=(const Mutantstack &assigning)
{
    this->c.operator=(assigning);
}
