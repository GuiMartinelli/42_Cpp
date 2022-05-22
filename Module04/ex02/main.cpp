/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:34:19 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 16:34:54 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	// The following line will not compile, because AAnimal is now a Abstract Class and
	// can't be instanciated. If you don't belive me, uncomment and try it.
	// AAnimal	*animal = new AAnimal();

	std::cout << "==================================================" << std::endl;
	std::cout << "****  Default constructor and setting ideas ****" << std::endl << std::endl;
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	dog->setIdea("Pee");
	cat->setIdea("Sleep");
	dog->setIdea("Eat the TV Control");
	cat->setIdea("Sleep a little more");
	std::cout << "Dog ideas: " << dog->getIdea() << std::endl;
	std::cout << "Cat ideas: " << cat->getIdea() << std::endl;

	std::cout << "==================================================" << std::endl;
	std::cout << "**** Copy constructor and checking if ideas were copied ****" << std::endl << std::endl;
	Dog *dog_cp = new Dog(*dog);
	Cat *cat_cp = new Cat(*cat);
	std::cout << "Copy Dog ideas: " << dog_cp->getIdea() << std::endl;
	std::cout << "Copy Cat ideas: " << cat_cp->getIdea() << std::endl;

	std::cout << "==================================================" << std::endl;
	std::cout << "**** Destructing objects ****" << std::endl << std::endl;
	delete dog;
	delete cat;
	delete dog_cp;
	delete cat_cp;
}
