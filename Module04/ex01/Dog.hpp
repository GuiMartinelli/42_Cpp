/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:14:11 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/23 18:57:08 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(Dog const & obj);
	virtual ~Dog();

	Dog &	operator=(Dog const & obj);

	void	setIdea(std::string idea);
	Brain	&getIdea(void) const ;

	void	makeSound() const ;
};

#endif
