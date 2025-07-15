#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(T* array, int length, void (*f)(T&))
{
	if (!array || length <= 0)
		return ;
	for (int i = 0; i < length; ++i)
		f(array[i]);
}

template <typename T>
void	iter(T* array, int length, void (*f)(const T&))
{
	if (!array || length <= 0)
		return ;
	for (int i = 0; i < length; ++i)
		f(array[i]);
}

#endif