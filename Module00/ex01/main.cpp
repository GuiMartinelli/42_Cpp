/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:44:18 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/03 18:51:09 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void) {
	Phonebook	phonebook;
	std::string	input;

	while (true) {
		std::cout << "> ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			phonebook.newContact();
		else if (input.compare("SEARCH") == 0)
			phonebook.searchContact();
		else if (input.compare("EXIT") == 0)
			break ;
		else {
			std::cout << "INVALID COMMAND" << std::endl;
			std::cout << "The valid commands are: ADD, SEARCH and EXIT" << std::endl;
		}
	}
}