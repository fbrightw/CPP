#ifndef ARRAY_HPP
# define ARRAY_HPP


template<class T>
class Array {
    public: 
        Array( void ) { 
            _arr = NULL;
            _len = 0;
        }
        Array(unsigned int n) { 
            _arr = new T[n]; 
            _len = n;
        };
        unsigned int size() const { return _len; }
        T       *getArr() const { return _arr; }
        Array(Array const &obj) {
            _len = obj.size();
            _arr = new T[_len];
            for (unsigned int i = 0; i < _len; i++) {
                _arr[i] = obj.getArr()[i];
            }
        }
        Array &operator=(Array const &assigning) {
            if (_arr)
                delete [] _arr;
            _len = assigning.size();
            _arr = new T[_len];
            for (int i = 0; i < _len; i++) {
                _arr[i] = assigning.getArr()[i];
            }
        }
        T &operator[](unsigned int n) {
            if (static_cast<unsigned int>(n) >= _len || n < 0)
                throw OutOfRange();
            return (_arr[n]);
        }
        class OutOfRange : public std::exception {
            public :
                virtual const char *what() const throw() {
                    return "Out of range";
                }
        };
        ~Array() {
            if (_arr)
                delete [] _arr;
        }
    private:
        T *_arr;
        unsigned int _len;
};

#endif