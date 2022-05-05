/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:09:38 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/03 20:04:59 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <stdlib.h>

Phonebook::Phonebook( void ) {
	std::cout << "======================================================" << std::endl
		<< "***** Welcome to the Amazing Digital Phonebook!! *****" << std::endl
		<< "======================================================" << std::endl;
	this->index = -1;
}

Phonebook::~Phonebook( void ) {
		std::cout << "======================================================" << std::endl
		<< "************* See you next time! Bye Bye *************" << std::endl
		<< "======================================================" << std::endl;
}

void	Phonebook::newContact( void ) {
	if (this->index < 0)
		this->index = 0;
	this->_contacs[this->index % 8].setFstName();
	this->_contacs[this->index % 8].setLstName();
	this->_contacs[this->index % 8].setNickname();
	this->_contacs[this->index % 8].setPhone();
	this->_contacs[this->index % 8].setSecret();
	this->index++;
	std::cout << "Contact save sucessfully" << std::endl;
}

void	Phonebook::searchContact( void ) {
	std::string	input;
	int			index;
	int			n_contacts;

	if ( this->index < 0) {
		std::cout << "You don't have saved contacts yet" << std::endl;
		return ;
	}
	n_contacts = this->index > 8 ? 8 : this->index;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < n_contacts; i++) {
		this->_contacs[i].printContact(i + 1);
	}
	while ( true ) {
		std::cout << "Insert a Index: ";
		std::cin >> input;
		index = atoi(input.c_str());
		if (index > 0 && index <= n_contacts)
			break ;
		std::cout << "Invalid index! Try Again." << std::endl;
	}
	this->_contacs[index - 1].printExtededContact(index);
}
