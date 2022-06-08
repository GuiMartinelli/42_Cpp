/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:52:44 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/07 21:03:00 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <limits>

static bool	isValidNum(std::string str) {
	int	dot = 0;

	for (int i = 0; i < (int)str.length(); i++) {
		if (str[i] == '.' && dot == 0)
			dot++;
		else if (!isdigit(str[i]) && !(i == 0 && str[i] == '-')
					&& !(i == ((int)str.length() - 1) && str[i] == 'f'))
			return false;
	}
	return true;
}

void	toChar(std::string str) {
	char		c;
	std::string	ret;

	if (str.length() > 1 && !isdigit(str[0]))
		std::cout << "impossible" << std::endl;
	else if (isprint(str[0]) && !isdigit(str[0]))
		std::cout << '\'' << str << '\'' << std::endl;
	else {
		if (std::atoll(str.c_str()) > 126 || !isValidNum(str)) {
			std::cout << "impossible" << std::endl;
			return ;
		}
		c = static_cast<char>(std::atoi(str.c_str()));
		if (!isprint(c))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << '\'' << c << '\'' << std::endl;
	}
}

void	toInt(std::string str) {
	int	n;

	if (!isValidNum(str)) {
		if (str.length() == 1)
			std::cout << static_cast<int>(str[0]) << std::endl;
		else
			std::cout << "impossible" << std::endl;
		return ;
	}
	n = std::atol(str.c_str());
	if (n > INT_MAX || n < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << n << std::endl;
}

void	toFloat(std::string str) {
	double	f;

	if (!isValidNum(str)) {
		if (str.length() == 1)
			std::cout << static_cast<int>(str[0]) << ".0f" << std::endl;
		else
			std::cout << "nanf" << std::endl;
		return ;
	}
	f = atof(str.c_str());
	if (f == std::numeric_limits<float>::infinity()) {
		if (f < 0)
			std::cout << "-inff";
		else
			std::cout << "inff";
	}
	else if ((double)(f - (int)f) == 0)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;
}

void	toDouble(std::string str) {
	double	f;

	if (!isValidNum(str)) {
		if (str.length() == 1)
			std::cout << static_cast<int>(str[0]) << ".0" << std::endl;
		else
			std::cout << "nan" << std::endl;
		return ;
	}
	f = atof(str.c_str());
	if (f == std::numeric_limits<double>::infinity()) {
		if (f < 0)
			std::cout << "-inf";
		else
			std::cout << "inf";
	}
	if ((double)(f - (int)f) == 0)
		std::cout << f << ".0" << std::endl;
	else
		std::cout << f << std::endl;
}
