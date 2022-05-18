/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:04:32 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/18 20:22:30 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->_value = 0;
}

Fixed::Fixed( const int n ) {
	this->_value = n << this->_bits;
}

Fixed::Fixed( const float f ) {
	this->_value = roundf(f * (1 << this->_bits));
}

Fixed::Fixed( Fixed const & obj ) {
	*this = obj;
}

Fixed::~Fixed(void) {}

Fixed &	Fixed::operator=( Fixed const & obj ) {
	if (this != &obj)
		this->_value = obj.getRawBits();
	return (*this);
}

bool	Fixed::operator>( Fixed const & obj) const {
	return (this->getRawBits() > obj.getRawBits());
}

bool	Fixed::operator<( Fixed const & obj) const {
	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=( Fixed const & obj) const {
	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=( Fixed const & obj) const {
	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==( Fixed const & obj) const {
	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=( Fixed const & obj) const {
	return (this->getRawBits() != obj.getRawBits());
}

Fixed	Fixed::operator+( Fixed const & obj ) const {
	Fixed	sum;

	sum.setRawBits(this->getRawBits() + obj.getRawBits());
	return sum;
}

Fixed	Fixed::operator-( Fixed const & obj ) const {
	Fixed	sub;

	sub.setRawBits(this->getRawBits() - obj.getRawBits());
	return sub;
}

Fixed	Fixed::operator*( Fixed const & obj ) const {
	Fixed	mult;

	mult.setRawBits((this->getRawBits() * obj.getRawBits()) >> mult._bits);
	return mult;
}

Fixed	Fixed::operator/( Fixed const & obj ) const {
	Fixed	div(this->toFloat() / obj.toFloat());

	return div;
}

Fixed &	Fixed::operator++( void ) {
	this->_value++;
	return *this;
}

Fixed &	Fixed::operator--( void ) {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	temp(*this);

	this->_value++;
	return temp;
}

Fixed	Fixed::operator--( int ) {
	Fixed	temp(*this);

	this->_value--;
	return temp;
}

Fixed &	Fixed::max( Fixed& a, Fixed& b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed &	Fixed::min( Fixed& a, Fixed& b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed const &	Fixed::max( Fixed const & a, Fixed const & b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
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