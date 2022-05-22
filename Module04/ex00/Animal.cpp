/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:08:02 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 13:43:59 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;

	this->type = "Animal";
}

Animal::Animal(Animal const & obj) {
	std::cout << "Animal copy constructor called" << std::endl;

	*this = obj;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}

	return *this;
}

void	Animal::makeSound() const {
	std::cout << this->type << " makes animal noises" << std::endl;
}
