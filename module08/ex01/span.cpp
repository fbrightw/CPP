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
    int remainder = INT_MIN;
    for (unsigned int i = 0; i < _len - 1; i++) {
        for (unsigned int j = i + 1; j < _len; j++) {
            if (abs(_arr[i] - _arr[j]) > remainder)
                remainder = _arr[i] - _arr[j];
        }
    }
    return remainder;
}

unsigned int Span::shortestSpan() {
    if (_len <= 1)
        throw AddNumberError();
    int remainder = INT_MAX;
    for (unsigned int i = 0; i < _len - 1; i++) {
        for (unsigned int j = i + 1; j < _len; j++) {
            if (abs(_arr[i] - _arr[j]) < remainder)
                remainder = _arr[i] - _arr[j];
        }
    }
    return remainder;
}