/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:25:02 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/01 20:28:20 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
}

Base *	generate(void) {
	int	random = rand() % 3;

	if (random == 0) {
		std::cout << "Object A instanciated" << std::endl;
		return new A();
	}
	else if (random == 1) {
		std::cout << "Object B instanciated" << std::endl;
		return new B();
	}
	std::cout << "Object C instanciated" << std::endl;
	return new C();
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void	identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch(std::exception& e) {}

	try {
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch(std::exception& e) {}

	std::cout << "C" << std::endl;
	return ;
}