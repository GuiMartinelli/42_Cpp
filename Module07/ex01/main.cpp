/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:31:01 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/02 20:53:51 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	increment(int & x) {
	x++;
}

void	ramoneName(std::string & name) {
	name += " Ramone";
}

int	main(void) {
	int	arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "Testing with numerical array: " << std::endl;

	std::cout << "Before: ";
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i];
		if (i < 9)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

	::iter(arr, 10, increment);

	std::cout << "After: ";
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i];
		if (i < 9)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

	std::string arr2[3] = {"Harry", "Tom", "Oliver"};

	std::cout << std::endl << "Testing with string array: " << std::endl;

	std::cout << "Before: ";
	for (int i = 0; i < 3; i++) {
		std::cout << arr2[i];
		if (i < 2)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

	::iter(arr2, 3, ramoneName);

	std::cout << "After: ";
	for (int i = 0; i < 3; i++) {
		std::cout << arr2[i];
		if (i < 2)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
}