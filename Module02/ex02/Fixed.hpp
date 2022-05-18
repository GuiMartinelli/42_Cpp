/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:01:54 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/18 19:59:19 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
private:
	int					_value;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed( const int n );
	Fixed( const float f );
	Fixed( Fixed const & obj );
	~Fixed();

	bool	operator>( Fixed const & obj) const ;
	bool	operator<( Fixed const & obj) const ;
	bool	operator>=( Fixed const & obj) const ;
	bool	operator<=( Fixed const & obj) const ;
	bool	operator==( Fixed const & obj) const ;
	bool	operator!=( Fixed const & obj) const ;

	Fixed &	operator=( Fixed const & obj );
	Fixed	operator+( Fixed const & obj ) const ;
	Fixed	operator-( Fixed const & obj ) const ;
	Fixed	operator*( Fixed const & obj ) const ;
	Fixed	operator/( Fixed const & obj ) const ;

	Fixed &	operator++( void );
	Fixed &	operator--( void );
	Fixed	operator++( int );
	Fixed	operator--( int );

	static Fixed &			max( Fixed& a, Fixed& b);
	static Fixed &			min( Fixed& a, Fixed& b);
	static Fixed const &	max( Fixed const & a, Fixed const & b);
	static Fixed const &	min( Fixed const & a, Fixed const & b);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & obj );

#endif