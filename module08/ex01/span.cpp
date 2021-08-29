#include "span.hpp"
#include <cstdlib>

Span::Span(unsigned int N) {
    _len = N;
    _N = N; 
    _index = 0;    
} 

Span::~Span() {}

void Span::addNumber(int value) {
    if (_index == _len)
        throw AddNumberError();
    _arr[_index] = value;
    _index++;
}

unsigned int Span::longestSpan() {
    if (_len <= 1)
        throw AddNumberError();
    std::sort(_arr.begin(), _arr.end());
    return _arr.end() - _arr.begin();
}

unsigned int Span::shortestSpan() {
    if (_len <= 1)
        throw AddNumberError();
    std::sort(_arr.begin(), _arr.end());
    int remainder = _arr.end() - _arr.begin();
    std::cout << remainder << std::endl;
    for (unsigned int i = 0; i < _len - 1; i++) {
        if (abs(_arr[i] - _arr[i + 1]) < remainder)
            remainder = _arr[i] - _arr[i + 1];
    }
    return remainder;
}