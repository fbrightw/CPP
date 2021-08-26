#ifndef ARRAY_HPP
# define ARAY_HPP


template<class T>
class Array {
    public: 
        Array( void ) { 
            _arr = NULL;
            _len = 0;
        }
        Array(unsigned int n) { 
            _arr = new T(n); 
            _len = n;
        };

        int     getLength() { return _len; }
        T       *getArr() { return _arr; }

        Array(Array const &obj) {
            _len = obj.getLength();
            _arr = new T[_len];
            for (int i = 0; i < _len; i++) {
                _arr[i] = obj.getArr()[i];
            }
        }

        Array &operator=(const Array &assigning) {
            if (_arr)
                delete [] _arr;
            _len = assigning.getLength();
            _arr = new T[_len];
            for (int i = 0; i < _len; i++) {
                _arr[i] = obj.getArr()[i];
        }

        T &operator[](unsigned int n) {
            if (static_cast<unsigned int>(n) >= _len || n < 0)
                throw OutOfRange();
            return (_arr[n]; )
        }

        class OutofRange : public std::exception {
            public :
                virtual const char *what const throw() {
                    return "Out of range";
                }
        }

        ~Array() {
            if (_arr)
                delete [] _arr;
        }

        int size() { return _len; }

    private:
        T *_arr;
        int _len;
};

#endif