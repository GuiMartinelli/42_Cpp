/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:34:19 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 16:16:46 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	std::cout << "==================================================" << std::endl;
	std::cout << "****  Default constructor and setting ideas ****" << std::endl << std::endl;
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	dog->setIdea("Pee");
	cat->setIdea("Sleep");
	std::cout << "Dog ideas: " << dog->getIdea() << std::endl;
	std::cout << "Cat ideas: " << cat->getIdea() << std::endl;

	std::cout << "==================================================" << std::endl;
	std::cout << "**** Copy constructor and checking if ideas were copied ****" << std::endl << std::endl;
	Dog *dog_cp = new Dog(*dog);
	Cat *cat_cp = new Cat(*cat);
	std::cout << "Copy Dog ideas: " << dog_cp->getIdea() << std::endl;
	std::cout << "Copy Cat ideas: " << cat_cp->getIdea() << std::endl;

	std::cout << "==================================================" << std::endl;
	std::cout << "**** Trying to set more than 100 ideas to the cat ****" << std::endl << std::endl;
	for (int i = 0; i < 100; i++) {
		cat->setIdea("Sleep");
	}

	std::cout << "==================================================" << std::endl;
	std::cout << "**** Destructing objects ****" << std::endl << std::endl;
	delete dog;
	delete cat;
	delete dog_cp;
	delete cat_cp;
}
