/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:08:02 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 14:03:00 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;

	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & obj) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;

	*this = obj;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}

	return *this;
}

void	WrongAnimal::makeSound() const {
	std::cout << this->type << " makes WrongAnimal noises" << std::endl;
}
