/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:34:19 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 15:23:59 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	std::cout << "=========================================================" << std::endl;
	std::cout << "**** Instancing Objects ****" << std::endl << std::endl;
	Dog *dog1 = new Dog();
	Cat *cat1 = new Cat();

	dog1->makeSound();
	cat1->makeSound();

	std::cout << "=========================================================" << std::endl;
	std::cout << "**** Instancing Objects with Copy Constructor ****" << std::endl << std::endl;
	Animal *dog2 = new Dog(*dog1);
	Animal *cat2 = new Cat(*cat1);

	dog2->makeSound();
	cat2->makeSound();

	std::cout << "=========================================================" << std::endl;
	std::cout << "**** Instancing Animal Object ****" << std::endl << std::endl;
	Animal *animal = new Animal();
	animal->makeSound();

	std::cout << "=========================================================" << std::endl;
	std::cout << "**** Instancing WrongAnimal and WrongCat Object ****" << std::endl << std::endl;
	WrongAnimal *wrongAn = new WrongAnimal();
	WrongAnimal *wrongCat = new WrongCat();
	wrongAn->makeSound();
	wrongCat->makeSound();

	std::cout << "=========================================================" << std::endl;
	std::cout << "**** Destructing Objects and cleaning memory ****" << std::endl << std::endl;
	delete dog1;
	delete cat1;
	delete dog2;
	delete cat2;
	delete animal;
	delete wrongAn;
	delete wrongCat;
}
