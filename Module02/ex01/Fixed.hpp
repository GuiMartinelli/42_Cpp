/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:01:54 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/17 21:44:08 by guferrei         ###   ########.fr       */
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

	Fixed &	operator=( Fixed const & obj );

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & obj );

#endif