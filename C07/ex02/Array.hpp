#ifndef ARRAY_HPP
#define ARRAY_HPP

template<class T>
class Array
{
private:
    T *array;
    unsigned int _size;
public:
    Array(void);
    Array(Array const &other);
    Array(unsigned int _n);
    ~Array(void);
    Array &operator=(Array const &other);
	T & operator[](int i);
	T & operator[](int i) const;
	unsigned int	size(void) const;
};


template <class T>
Array<T> :: Array(void) : array(nullptr), _size(0) {}

template <class T>
Array<T> :: Array(unsigned int _n) : _size(_n) {
	if (_size == 0)
		array = nullptr;
	else if (_size > 0)
		array = new T[_size];
	else
		throw std :: overflow_error("Out of range");
}

template <class T>
Array<T> :: Array(const Array<T> & other) {
	*this = other;
}

template <class T>
Array<T> :: ~Array(void) {
	if (_size > 0)
		delete [] array;
}

template <class T>
T & Array<T> :: operator[](int i) {
	if (i < 0 || static_cast<unsigned int>(i) > _size - 1 || _size == 0)
		throw std :: overflow_error("Index out of range");
	else
		return array[i];
}

template <class T>
T & Array<T> :: operator[](int i) const{
	if (i < 0 || static_cast<unsigned int>(i) > _size - 1 || _size == 0)
		throw std :: overflow_error("Index out of range");
	else
		return array[i];
}

template <class T>
Array<T> & Array<T> :: operator=(const Array<T> & other) {
	if (this != &other) {
		_size = other._size;
		array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			array[i] = other.array[i];
	}
	return *this;
}

template <class T>
unsigned int Array<T> :: size(void) const {
	return _size;
}

#endif