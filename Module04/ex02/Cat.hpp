/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:25:35 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 16:11:51 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(Cat const & obj);
	~Cat();

	Cat &	operator=(Cat const & obj);

	void	setIdea(std::string idea);
	Brain	&getIdea(void) const ;

	void	makeSound() const ;
};

#endif
