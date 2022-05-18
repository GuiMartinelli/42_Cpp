/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:04:32 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/17 21:49:27 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( const int n ) {
	std::cout << "Int constructor called" << std::endl;

	this->_value = n << this->_bits;
}

Fixed::Fixed( const float f ) {
	std::cout << "Float constructor called" << std::endl;

	this->_value = roundf(f * (1 << this->_bits));
}

Fixed::Fixed( Fixed const & obj ) {
	std::cout << "Copy constructor called" << std::endl;

	*this = obj;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & obj ) {
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->_value = obj.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)this->_value / (1 << this->_bits));
}

int		Fixed::toInt( void ) const {
	return (this->_value >> this->_bits);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & obj ) {
	o << obj.toFloat();

	return o;
}