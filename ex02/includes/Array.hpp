/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:26:47 by agilles           #+#    #+#             */
/*   Updated: 2025/06/24 10:58:56 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

 template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &cp);

		~Array();

		Array	&operator=(const Array &cp);
		T			&operator[](unsigned int i);
		T	const	&operator[](unsigned int i)const;

		unsigned int	size() const;

		class OutOfBounds : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
#include "Array.tpp"
