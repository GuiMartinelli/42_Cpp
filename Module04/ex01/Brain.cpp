/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:29:31 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 15:11:27 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & obj) {
	std::cout << "Brain copy constructor called" << std::endl;

	*this = obj;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &	Brain::operator=(Brain const & obj) {
	if (this != &obj) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Brain const & obj ) {
	for (int i = 0; !obj.ideas[i].empty(); i++) {
		if (i > 0)
			o << ", ";
		o << obj.ideas[i];
	}

	return o;
}
