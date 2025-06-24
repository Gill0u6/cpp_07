/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:46:44 by agilles           #+#    #+#             */
/*   Updated: 2025/06/24 11:02:04 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 template <typename T>
Array<T>::Array(): _array(NULL), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{}

// ~Array();

// Array	&operator=(const Array &cp);
// T			&operator[](unsigned int i);
// T	const	&operator[](unsigned int i)const;

// unsigned int	size() const;
