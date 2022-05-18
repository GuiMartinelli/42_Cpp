/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:01:02 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/18 20:27:37 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {
	Fixed	f1(10);
	Fixed	f2(10.0f);
	Fixed	f3(2.5f);
	Fixed	f4(15.5f);

	std::cout << std::endl << "========================" << std::endl;
	std::cout << "Testing comparisons operators" << std::endl << std::endl;
	std::cout << "True tests:" << std::endl;
	std::cout << (f1 > f3) << std::endl;
	std::cout << (f1 < f4) << std::endl;
	std::cout << (f1 >= f2) << std::endl;
	std::cout << (f2 <= f1) << std::endl;
	std::cout << (f2 == f1) << std::endl;
	std::cout << (f2 != f4) << std::endl;

	std::cout << std::endl << "False tests:" << std::endl;
	std::cout << (f1 > f4) << std::endl;
	std::cout << (f2 < f3) << std::endl;
	std::cout << (f1 >= f4) << std::endl;
	std::cout << (f2 <= f3) << std::endl;
	std::cout << (f2 == f4) << std::endl;
	std::cout << (f2 != f1) << std::endl;

	std::cout << std::endl << "========================" << std::endl;
	std::cout << "Testing arithmetic operators" << std::endl << std::endl;
	std::cout << " 10 + 2.5 = " << (f1 + f3) << std::endl;
	std::cout << " 10 + 10 = " << (f1 + f2) << std::endl;
	std::cout << " 10 + 15.5 = " << (f1 + f4) << std::endl;
	std::cout << " 10 - 10 = " << (f2 - f1) << std::endl;
	std::cout << " 10 - 2.5 = " << (f2 - f3) << std::endl;
	std::cout << " 10 - 15.5 = " << (f2 - f4) << std::endl;
	std::cout << " 10 * 15.5 = " << (f1 * f4) << std::endl;
	std::cout << " 10 * 2.5 = " << (f1 * f3) << std::endl;
	std::cout << " 10 * 10 = " << (f1 * f2) << std::endl;
	std::cout << " 10 / 2.5 = " << (f2 / f3) << std::endl;
	std::cout << " 10 / 15.5 = " << (f2 / f4) << std::endl;
	std::cout << " 10 / 10 = " << (f2 / f1) << std::endl;

	std::cout << std::endl << "========================" << std::endl;
	std::cout << "Testing increment/decrement operators" << std::endl << std::endl;
	std::cout << ++f1 << std::endl;
	f1 = 10;
	std::cout << f1++ << std::endl;
	std::cout << f1 << std::endl;
	std::cout << --f2 << std::endl;
	f2 = 10;
	std::cout << f2-- << std::endl;
	std::cout << f2 << std::endl;

	f1 = 10;
	std::cout << std::endl << "========================" << std::endl;
	std::cout << "Testing max and min functions" << std::endl << std::endl;
	std::cout << "Max between 10 and 2.5: " << Fixed::max(f1, f3) << std::endl;
	std::cout << "Min between 10 and 2.5: " << Fixed::min(f1, f3) << std::endl;
}