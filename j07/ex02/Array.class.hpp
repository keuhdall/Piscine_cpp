#pragma once

#include <stdexcept>

template<typename T>
class Array {
    public:
        Array<T>() {
            _size = 0;
            _content = NULL;
        }

        Array<T>(unsigned int n) {
            _size = n;
            _content = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _content[i] = T();
            }
        }

        Array<T>(Array<T> const & src) {
            *this = src;
        }

        virtual ~Array<T>() {
            delete[] _content;
        }

        Array<T> & operator=(Array<T> const & rhs) {
            T *tmp = new T[rhs.size()];
            for (unsigned int i = 0; i < rhs.size(); i++) {
                tmp[i] = rhs._content[i];
            }
            _size = rhs.size();
            delete[] _content;
            _content = tmp;
        }

        T & operator[](int n)
		{
			if (!_content || static_cast<unsigned int>(n) >= _size)
				throw std::exception();
			return (_content[n]);
        }

        unsigned int size(void) const {
            return _size;
        }

    private:
        T *_content;
        unsigned int _size;
};