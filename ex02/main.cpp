/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:01:40 by agilles           #+#    #+#             */
/*   Updated: 2025/06/25 10:10:42 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Array.hpp"

int main(void)
{
	{
		std::cout << "\033[34m" << std::endl << "Empty Array" << "\033[0m" << std::endl;
		Array<int> emptyArray;
		std::cout << "\033[34m" << std::endl << "Out Of Bounds" << "\033[0m" << std::endl;
		try
		{
			std::cout << "emptyArray[5]: " << emptyArray[5] << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}


	{
		std::cout << "\033[34m" << std::endl << "Int Array" << "\033[0m" << std::endl;
		Array<int> intArray(5);
		for (int i = 0; i < 5; i++)
			intArray[i] = i;
		std::cout << "intArray Size: " << intArray.size() << std::endl;
		std::cout << "intArray: ";
		for (int i = 0; i < 5; i++)
			std::cout << intArray[i] << " ";
		std::cout << std::endl;
	}
	return (0);
}
