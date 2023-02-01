#ifndef	ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(const T array[], size_t len, void func(const T &))
{
	size_t	i = 0;
	while (i < len)
	{
		func(array[i]);
		i++;
	}
}

template<typename T> void	printData(const T &data)
{
	std::cout << data << " ";
}

#endif