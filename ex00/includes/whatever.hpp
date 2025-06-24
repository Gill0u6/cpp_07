/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 08:59:47 by agilles           #+#    #+#             */
/*   Updated: 2025/06/24 09:15:09 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

 template<typename T>
void	swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

 template<typename T>
T	min(T a, T b)
{
	if (a == b)
		return (b);
	return (a < b ? a : b);
}

 template<typename T>
T	max(T a, T b)
{
	if (a == b)
		return (b);
	return (a < b ? b : a);
}
