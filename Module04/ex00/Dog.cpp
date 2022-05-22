/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:20:47 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 14:16:44 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;

	this->type = "Dog";
}

Dog::Dog(Dog const & obj) : Animal() {
	std::cout << "Dog copy constructor called" << std::endl;

	*this = obj;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return *this;
}

void	Dog::makeSound() const  {
	std::cout << this->type << " barks: Au Au" << std::endl;
}
