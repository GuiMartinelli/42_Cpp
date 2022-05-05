/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:22 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/03 19:17:56 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact( void ) {
}

Contact::~Contact( void ){
}

static void	resizeString(std::string str) {
	if (str.length() > 10) {
		str.resize(10);
		str[9] = '.';
	}
	std::cout << std::setw(10) << str << "|";
}

static int	isAlphaString(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isalpha(str[i]))
			return (0);
	}
	return (1);
}

static int	isDigitString(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

void	Contact::printContact( int index ) {
	std::cout << std::setw(10) << index << "|";
	resizeString(this->_fstName);
	resizeString(this->_lstName);
	resizeString(this->_nickname);
	std::cout << std::endl;
}

void	Contact::printExtededContact( int index ) {
	std::cout << "INDEX: " << index << std::endl;
	std::cout << "First Name: " << this->_fstName << std::endl;
	std::cout << "Last Name: " << this->_lstName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone << std::endl;
	std::cout << "Darkest Secret: " << this->_secret << std::endl;
}

void	Contact::setFstName( void ) {

	std::string	input;

	while (true) {
		std::cout << "Input your Name: ";
		std::cin >> input;
		if (input.length() > 1 && isAlphaString(input))
			break ;
		std::cout << "Invalid Name!! Try Again." << std::endl;
	}
	this->_fstName = input;
}

void	Contact::setLstName( void ) {
	std::string	input;

	while (true) {
		std::cout << "Input your Last Name: ";
		std::cin >> input;
		if (input.length() > 1 && isAlphaString(input))
			break ;
		std::cout << "Invalid Last Name!! Try Again." << std::endl;
	}
	this->_lstName = input;
}

void	Contact::setNickname( void ) {
	std::string	input;

	while (true) {
		std::cout << "Input your Nickname: ";
		std::cin >> input;
		if (input.length() > 1 && isAlphaString(input))
			break ;
		std::cout << "Invalid Nickname!! Try Again." << std::endl;
	}
	this->_nickname = input;
}

void	Contact::setPhone( void ) {
	std::string	input;

	while (true) {
		std::cout << "Input your Phone Number: ";
		std::cin >> input;
		if (input.length() > 7 && isDigitString(input))
			break ;
		std::cout << "Invalid Phone Number!! Try Again." << std::endl;
	}
	this->_phone = input;
}

void	Contact::setSecret( void ) {
	std::string	input;

	while (true) {
		std::cout << "Input your Darkest Secret: ";
		std::cin >> input;
		if (input.length() > 1 && isAlphaString(input))
			break ;
		std::cout << "Invalid Secret!! Trust me, i won't tell anyone. Try Again." << std::endl;
	}
	this->_secret = input;
}
