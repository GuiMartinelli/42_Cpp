/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:44:16 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/03 19:24:42 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void) {
	Array<int>	a(20);
	Array<char>	b(10);
	Array<char>	c(10);
	
	std::cout << "Integer Array:" << std::endl;
	for (unsigned int i = 0; i < a.size(); i++) {
		a[i] = i * 10;
	}

	std::cout << "Printing values using operator []: " << std::endl;
	for (unsigned int i = 0; i < a.size(); i++) {
		if (i == (a.size() - 1))
			std::cout << a[i] << std::endl;
		else
			std::cout << a[i] << ", ";
	}
	
	std::cout << "Array size is: " << a.size() << std::endl;
	std::cout << "Trying to set a non-allocated memory:";
	try {
		a[a.size()] = 42;
	} catch (std::exception& e) {
		std::cout << "Wasn't possible to set value" << std::endl;
	}

	std::cout << std::endl << "===============================================================================" << std::endl << std::endl;

	std::cout << "Char Array:" << std::endl;
	for (unsigned int i = 0; i < b.size(); i++) {
		b[i] = 'a' + i;
	}

	std::cout << "Printing values using operator []: " << std::endl;
	for (unsigned int i = 0; i < b.size(); i++) {
		if (i == (b.size() - 1))
			std::cout << b[i] << std::endl;
		else
			std::cout << b[i] << ", ";
	}
	std::cout << "Array size is: " << b.size() << std::endl;

	std::cout << std::endl << "===============================================================================" << std::endl << std::endl;

	std::cout << "Copying a Char Array:" << std::endl;

	c = b;

	std::cout << "Printing copied values using operator []: " << std::endl;
	for (unsigned int i = 0; i < c.size(); i++) {
		if (i == (c.size() - 1))
			std::cout << c[i] << std::endl;
		else
			std::cout << c[i] << ", ";
	}

	std::cout << "Checking that modifying one doesn't affect the other: " << std::endl;
	c[3] = 'Z';

	std::cout << "c[3] = " << c[3] << std::endl;
	std::cout << "b[3] = " << b[3] << std::endl;

}