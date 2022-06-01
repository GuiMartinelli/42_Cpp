/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:01:01 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/01 16:54:30 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "conversions.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		std::cout << "Char: ";
		toChar(argv[1]);
		std::cout << "Int: ";
		toInt(argv[1]);
		std::cout << "Float: ";
		toFloat(argv[1]);
		std::cout << "Double: ";
		toDouble(argv[1]);
	}
	else {
		std::cerr << "Invalid input. Please input only one argument" << std::endl;
	}
}
