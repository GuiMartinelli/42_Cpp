/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:20:47 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 16:10:02 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;

	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(Dog const & obj) : Animal() {
	std::cout << "Dog copy constructor called" << std::endl;

	*this = obj;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;

	delete this->brain;
}

Dog &	Dog::operator=(Dog const & obj) {
	if (this != &obj) {
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
}

void	Dog::setIdea(std::string idea){
	int	index = 0;

	while (!this->brain->ideas[index].empty()){
		index++;
	}
	if (index < 100)
		this->brain->ideas[index] = idea;
	else
		std::cout << "The Dog already have 100 idea" << std::endl;
}

Brain	&Dog::getIdea(void) const {
	return *this->brain;
}

void	Dog::makeSound() const  {
	std::cout << this->type << " barks: Au Au" << std::endl;
}
