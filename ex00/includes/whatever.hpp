#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	aux = a;
	a = b;
	b = aux;
}

/**
 * Passing the parameters as "T const &a" instead of "T a" is better
 * because the program does not create a copy of "a" so is more efficient.
 */

template <typename T>
T const	&max(T const &a, T const &b)
{
	return( a > b ? a : b);
}

template <typename T>
T const &min(T const &a, T const &b)
{
	return( a < b ? a : b);
}

#endif