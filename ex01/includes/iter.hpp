/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:56:03 by agilles           #+#    #+#             */
/*   Updated: 2025/06/24 10:11:34 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

 template<typename T_array, typename T_function>
void	iter(T_array *array, size_t len, T_function function)
{
	for (size_t i = 0; i < len; i++)
		function(array[i]);
}
