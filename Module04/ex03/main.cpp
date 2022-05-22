/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:04:18 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 17:38:30 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main(void) {
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp;
	ICharacter* p1 = new Character("Cloud");
	ICharacter* p2 = new Character("Aerith");
	ICharacter* p3 = new Character("Sephiroth");

	//Creating materias and equiping in p1, p2 and p3
	tmp = src->createMateria("ice");
	p1->equip(tmp);
	delete tmp;
	tmp = src->createMateria("ice");
	p3->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	p2->equip(tmp);
	delete tmp;

	//Using materias
	std::cout << "Cloud using ice: ";
	p1->use(0, *p3);
	std::cout << "Sephiroth using ice: ";
	p3->use(0, *p1);
	std::cout << "Aerith using cure: ";
	p2->use(0, *p1);

	//Trying to create a wrong materia
	std::cout << std::endl << "Trying to create a 'wrong' materia: ";
	std::cout << src->createMateria("wrong") << std::endl;

	//Trying to use a Materia with wrong index
	p1->use(4, *p3);

	//Trying to use a unequiped Materia
	p1->use(3, *p3);

	//Trying to equip more than 4 Materias
	tmp = src->createMateria("ice");
	p1->equip(tmp);
	delete tmp;
	tmp = src->createMateria("ice");
	p1->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	p1->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	p1->equip(tmp);
	delete tmp;

	delete p1;
	delete p2;
	delete p3;
	delete src;
	return 0;
}