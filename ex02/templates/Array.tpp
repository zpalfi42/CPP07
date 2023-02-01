#include <Array.hpp>

template <typename T>
Array<T>::Array( void ): _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array( unsigned int n ): _array(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array( const Array<T> &a ): _array(new T[a._size]), _size(a._size)
{
	for (unsigned int i = 0; i < a._size; i++)
		this->_array[i] = a._array[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &a)
{
	if (this != &a)
	{
		delete[] (this->_array);
		this->_size = a._size;
		this->_array = new T[this->_size];
		for (int i = 0; i < a._size; i++)
			this->_array[i] = a._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array( void )
{
	delete[] (this->_array);
}

template <typename T>
T &Array<T>::operator[](const int n)
{
	if (n < 0 || n >= (int)this->_size)
		throw(Array::IndexOutOfBounds());
	return (this->_array[n]);
}

template <typename T>
unsigned int	Array<T>::size( void )
{
	return (this->_size);
}