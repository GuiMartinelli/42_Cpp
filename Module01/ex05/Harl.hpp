/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:55:22 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/10 15:16:50 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		~Harl();
	
		void	complain(std::string level);
};

#endif
