/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:01:54 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/17 19:32:04 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	int					_value;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed( Fixed const & obj );
	~Fixed();

	Fixed &	operator=( Fixed const & obj );

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif