/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:46:44 by agilles           #+#    #+#             */
/*   Updated: 2025/06/25 10:07:40 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

 template <typename T>
Array<T>::Array(): _array(NULL), _size(0)
{
	std::cout << "Array Default Constructor called" << std::endl;
}

 template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	std::cout << "Array sized Constructor called" << std::endl;
}
template <typename T>
Array<T>::Array(Array const &cp): _array(new T[cp._size]), _size(cp._size)
{
	std::cout << "Array copy Constructor called" << std::endl;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = cp._array[i];
}

 template <typename T>
Array<T>::~Array()
{
	std::cout << "Array Deconstructor called" << std::endl;
}
 template <typename T>
Array<T>	&Array<T>::operator=(Array const &cp)
{
	if (this != &cp)
	{
		delete [] _array;
		_size = cp._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = cp._array[i];
	}
	return (*this);
}

template <typename T>
T			&Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw Array::OutOfBounds();
	return (_array[i]);
}

template <typename T>
T	const	&Array<T>::operator[](unsigned int i)const
{
	if (i >= this->_size)
		throw Array::OutOfBounds();
	return (_array[i]);
}

template <typename T>
const char *Array<T>::OutOfBounds::what(void) const throw()
{
	return ("Error: Out Of Bounds");
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

