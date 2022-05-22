/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:27:28 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 17:50:19 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;

	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const & obj) : AAnimal() {
	std::cout << "Cat copy constructor called" << std::endl;

	*this = obj;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;

	delete this->brain;
}

Cat &	Cat::operator=(Cat const & obj) {
	if (this != &obj) {
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
}

void	Cat::setIdea(std::string idea){
	int	index = 0;

	while (!this->brain->ideas[index].empty()){
		index++;
		if (index == 100)
			break ;
	}
	if (index < 100)
		this->brain->ideas[index] = idea;
	else
		std::cout << "The Cat already have 100 idea" << std::endl;
}

Brain	&Cat::getIdea(void) const {
	return *this->brain;
}

void	Cat::makeSound() const  {
	std::cout << this->type << " meows: Miau" << std::endl;
}
