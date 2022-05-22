/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:27:38 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/21 16:11:48 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain();
	Brain(Brain const & obj);
	~Brain();

	Brain &	operator=(Brain const & obj);

	std::string	ideas[100];
};

std::ostream &	operator<<( std::ostream & o, Brain const & obj );

#endif
