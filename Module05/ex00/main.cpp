/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:55:25 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/24 20:55:02 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat	*b1;

	std::cout << "Test 1 (Grade 0): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 0);
		std::cout << *b1 << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test 2 (Grade 160): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 160);
		std::cout << *b1 << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test 3 (Grade 5): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 5);
		std::cout << *b1 << std::endl;
		delete b1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test 4 (Grade 1 and increment): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 1);
		std::cout << *b1 << std::endl;
		b1->increment();
		std::cout << *b1 << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		delete b1;
	}

	std::cout << std::endl << "Test 5 (Grade 1 and decrement): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 1);
		std::cout << *b1 << std::endl;
		b1->decrement();
		std::cout << *b1 << std::endl;
		delete b1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test 6 (Grade 150 and decrement): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 150);
		std::cout << *b1 << std::endl;
		b1->decrement();
		std::cout << *b1 << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		delete b1;
	}

	std::cout << std::endl << "Test 7 (Grade 150 and increment): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 150);
		std::cout << *b1 << std::endl;
		b1->increment();
		std::cout << *b1 << std::endl;
		delete b1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test 8 (Grade 10 and increment): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 10);
		std::cout << *b1 << std::endl;
		b1->increment();
		std::cout << *b1 << std::endl;
		delete b1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test 9 (Grade 140 and decrement): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 5);
		std::cout << *b1 << std::endl;
		b1->decrement();
		std::cout << *b1 << std::endl;
		delete b1;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test 10 (Grade 10 and increment loop): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 10);
		std::cout << *b1 << std::endl;
		while (true)
			b1->increment();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		delete b1;
	}

	std::cout << std::endl << "Test 11 (Grade 140 and decrement loop): " << std::endl;
	try {
		b1 = new Bureaucrat("Thomas", 140);
		std::cout << *b1 << std::endl;
		while (true)
			b1->decrement();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		delete b1;
	}
}
