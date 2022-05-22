/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:27:28 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 14:16:52 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;

	this->type = "Cat";
}

Cat::Cat(Cat const & obj) : Animal() {
	std::cout << "Cat copy constructor called" << std::endl;

	*this = obj;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return *this;
}

void	Cat::makeSound() const  {
	std::cout << this->type << " meows: Miau" << std::endl;
}
