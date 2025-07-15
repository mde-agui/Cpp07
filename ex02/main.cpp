/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:14:22 by mde-agui          #+#    #+#             */
/*   Updated: 2025/06/12 13:14:25 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;

	Array<int>	intArr(5);
	std::cout << "Int array size: " << intArr.size() << std::endl;
	for (unsigned int i = 0; i < intArr.size(); ++i)
		intArr[i] = i + 1;
	std::cout << "Int array: ";
	for (unsigned int i = 0; i < intArr.size(); ++i)
		std::cout << intArr[i] << " ";
	std::cout << std::endl;

	Array<int>	copy(intArr);
	copy[0] = 100,
	std::cout << "Original after copy: " << intArr[0] << std::endl;
	std::cout << "Copy: " << copy[0] << std::endl;

	Array<int>	assigned;
	assigned = intArr;
	assigned[1] = 200;
	std::cout << "Original after assignment: " << intArr[1] << std::endl;
	std::cout << "Assigned: " << assigned[1] << std::endl;

	Array<std::string> strArr(3);
	strArr[0] = "Hello";
	strArr[1] = "World";
	strArr[2] = "!";
	std::cout << "String array: ";
	for (unsigned int i = 0; i < strArr.size(); ++i)
		std::cout << strArr[i] << " ";
	std::cout << std::endl;

	try
	{
		intArr[10] = 0;
	}
	catch (const std::exception& e)
	{
		std::cout << "Caught out-of-bounds exception" << std::endl;
	}
	return (0);
}