/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:08:02 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 13:43:59 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor called" << std::endl;

	this->type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const & obj) {
	std::cout << "AAnimal copy constructor called" << std::endl;

	*this = obj;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}

	return *this;
}
