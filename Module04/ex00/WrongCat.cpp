/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:27:28 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 13:40:28 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;

	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & obj) : WrongAnimal() {
	std::cout << "WrongCat copy constructor called" << std::endl;

	*this = obj;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return *this;
}

void	WrongCat::makeSound() const  {
	std::cout << this->type << " meows, but wrong: Malsjdf" << std::endl;
}
