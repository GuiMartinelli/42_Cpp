/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:24:40 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/07 19:58:24 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {
	std::cout << "Instancing a Span, with capacity of 10, populating and testing Longest/Shortest span:" << std::endl;
	Span*	span = new Span(10);

	for (int i = 0; i < 10; i++) {
		try {
			span->addNumber(i * i);
			if (i < 9)
				std::cout << (i * i) << ", ";
			else
				std::cout << (i * i) << std::endl;
		} catch (std::exception& e) {
			std::cout << "Failed" << std::endl;
		}
	}
	std::cout << "Longest Span is: " << span->longestSpan() << std::endl;
	std::cout << "Shortest Span is: " << span->shortestSpan() << std::endl << std::endl;

	std::cout << "Instancing a Span, populating only one element and testing Longest/Shortest span:" << std::endl;
	Span*	span1 = new Span(10);

	span1->addNumber(42);
	try {
		span1->longestSpan();
	} catch (std::exception& e) {
		std::cout << "Couldn't get the Longest Span" << std::endl;
	}
	try {
		span1->shortestSpan();
	} catch (std::exception& e) {
		std::cout << "Couldn't get the Shortest Span" << std::endl << std::endl;
	}

	std::cout << "Instancing a Span, with capacity of 4, and trying to populate with 6 elements:" << std::endl;
	Span*	span2 = new Span(4);

	for (int i = 0; i < 6; i++) {
		try {
			span2->addNumber(42);
			std::cout << i << ". Added" << std::endl;
		} catch (std::exception& e) {
			std::cout << i << ". Error!" << std::endl;
		}
	}
	std::cout << std::endl;

	std::cout << "Instancing a Span, with capacity of 1000, populating it and testing Longest/Shortest span:" << std::endl;
	Span*	span3 = new Span(1000);

	for (int i = 0; i < 1000; i++) {
		span3->addNumber(i * i);
	}
	std::cout << "Longest Span is: " << span3->longestSpan() << std::endl;
	std::cout << "Shortest Span is: " << span3->shortestSpan() << std::endl;

	delete span;
	delete span1;
	delete span2;
	delete span3;
}
