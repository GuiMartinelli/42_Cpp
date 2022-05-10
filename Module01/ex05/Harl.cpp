/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:57:22 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/10 15:16:46 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void	Harl::complain(std::string level) {
	void (Harl::*function[]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levelArr[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (!levelArr[i].compare(level))
		{
			(this->*function[i])();
			break ;
		}
	}
}
