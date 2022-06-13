/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:25:20 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/08 20:23:34 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int	main(void) {
	std::cout << "Setting a Stack of Integers, from 0 to 9 and printing using Iterator" << std::endl;

	MutantStack<int>*			stack = new MutantStack<int>();

	std::cout << "Testing if is empty: " << (stack->empty() ? "Empty" : "Not empty") << std::endl;

	for (int i = 0; i < 10; i++) {
		stack->push(i);
	}

	MutantStack<int>::iterator	itBegin = stack->begin();
	MutantStack<int>::iterator	itEnd = stack->end();

	for (int i = 0; (itBegin + i) < itEnd; i++) {
		std::cout << i << " = " << *(itBegin + i) << std::endl;
	}

	std::cout << "Testing if is empty: " << (stack->empty() ? "Empty" : "Not empty") << std::endl;

	//========================================================================================================

	std::cout << std::endl << "Copying the array, removing 2 elements and printing using Iterator" << std::endl;

	MutantStack<int>*	stack2 = stack;

	stack2->pop();
	stack2->pop();

	itBegin = stack2->begin();
	itEnd = stack2->end();

	for (int i = 0; (itBegin + i) < itEnd; i++) {
		std::cout << i << " = " << *(itBegin + i) << std::endl;
	}

	//========================================================================================================

	std::cout << std::endl << "Setting a Stack of Chars, from A to E, printing using Iterator and getting size" << std::endl;

	MutantStack<char>*			stack3 = new MutantStack<char>();

	for (int i = 0; i < 5; i++) {
		stack3->push(('A' + i));
	}

	MutantStack<char>::iterator	itBegin2 = stack3->begin();
	MutantStack<char>::iterator	itEnd2 = stack3->end();

	for (int i = 0; (itBegin2 + i) < itEnd2; i++) {
		std::cout << i << " = " << *(itBegin2 + i) << std::endl;
	}

	std::cout << "Size = " << stack3->size() << std::endl;

	delete stack;
	delete stack3;
}