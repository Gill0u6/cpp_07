/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:55:28 by agilles           #+#    #+#             */
/*   Updated: 2025/06/24 11:02:40 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/iter.hpp"

void	by_two(int &i)
{
	i *= 2;
}

void	to_upper(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

int main(void)
{
	{
		std::cout << "\033[34mTesting int_array\033[0m" << std::endl;
		int	int_array[] = {1, 2, 3, 4, 5};
		std::cout << "int array:";
		for (int i = 0; i < 5; i++)
				std::cout << "\n\t" << int_array[i];
		std::cout << std::endl;
		iter(int_array, 5, by_two);
		std::cout << "int array after iter(int_array, 5, by_two):" << std::endl;
			for (int i = 0; i < 5; i++)
				std::cout << int_array[i] << std::endl;
	}

	{
		std::cout << "\033[34mTesting string_array\033[0m" << std::endl;
		std::string string_array[] = {"tic", "tac", "", "lplplplp"};
		std::cout << "string array:";
		for (int i = 0; i < 4; i++)
				std::cout << "\n\t" << string_array[i];
		std::cout << std::endl;
		iter(string_array, 4, to_upper);
		std::cout << "int array after iter(string_array, 4, to_upper):" << std::endl;
			for (int i = 0; i < 4; i++)
				std::cout << string_array[i] << std::endl;
	}
	return (0);
}
