/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:16:44 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/06 19:23:54 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>
#include "easyfind.hpp"

int	main(void) {
	std::cout << "Testing with a Vector of Chars" << std::endl;

	std::vector<char>	vec;
	vec.push_back('a');
	vec.push_back('b');
	vec.push_back('c');
	vec.push_back('d');
	vec.push_back('e');
	vec.push_back('f');

	try {
		std::cout << "Result: " << *easyfind(vec, 'd') << std::endl;
	} catch (std::exception& e) {
		std::cout << "Element not found" << std::endl;
	}

	try {
		std::cout << "Result: " << *easyfind(vec, 17) << std::endl;
	} catch (std::exception& e) {
		std::cout << "Element not found" << std::endl;
	}

	std::cout << std::endl << "Testing with a List of Integers" << std::endl;

	std::list<int>	lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(6);

	try {
		std::cout << "Result: " << *easyfind(lst, 2) << std::endl;
	} catch (std::exception& e) {
		std::cout << "Element not found" << std::endl;
	}

	try {
		std::cout << "Result: " << *easyfind(lst, 17) << std::endl;
	} catch (std::exception& e) {
		std::cout << "Element not found" << std::endl;
	}
}