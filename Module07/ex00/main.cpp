/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:52:47 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/02 19:49:48 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.hpp"

int	main(void) {
	int	n1 = 43;
	int	n2 = 14;

	std::cout << "Integers:" << std::endl;
	std::cout << "Min between 43 and 14: " << ::min(n1, n2) << std::endl;
	std::cout << "Max between 43 and 14: " << ::max(n1, n2) << std::endl;
	std::cout << "Swap:" << std::endl;
	std::cout << "n1=" << n1 << "  |  n2=" << n2 << std::endl;
	::swap(n1, n2);
	std::cout << "n1=" << n1 << "  |  n2=" << n2 << std::endl << std::endl << std::endl;

	float	f1 = 3.14f;
	float	f2 = 10.2f;

	std::cout << "Floats:" << std::endl;
	std::cout << "Min between 3.14 and 10.2: " << ::min(f1, f2) << std::endl;
	std::cout << "Max between 3.14 and 10.2: " << ::max(f1, f2) << std::endl;
	std::cout << "Swap:" << std::endl;
	std::cout << "f1=" << f1 << "  |  f2=" << f2 << std::endl;
	::swap(f1, f2);
	std::cout << "f1=" << f1 << "  |  f2=" << f2 << std::endl << std::endl << std::endl;

	char	c1 = 'A';
	char	c2 = 'f';

	std::cout << "Chars:" << std::endl;
	std::cout << "Min between 'A' and 'f': " << ::min(c1, c2) << std::endl;
	std::cout << "Max between 'A' and 'f': " << ::max(c1, c2) << std::endl;
	std::cout << "Swap:" << std::endl;
	std::cout << "c1=" << c1 << "  |  c2=" << c2 << std::endl;
	::swap(c1, c2);
	std::cout << "c1=" << c1 << "  |  c2=" << c2 << std::endl << std::endl << std::endl;

	std::string	s1 = "Hello World";
	std::string	s2 = "Another String";

	std::cout << "Strings:" << std::endl;
	std::cout << "s1=" << &s1 << "  |  s2=" << &s2 << std::endl;
	std::cout << "Min between \"Hello World\" and \"Another String\": " << ::min(s1, s2) << std::endl;
	std::cout << "Max between \"Hello World\" and \"Another String\": " << ::max(s1, s2) << std::endl;
	std::cout << "Swap:" << std::endl;
	std::cout << "s1=" << s1 << "  |  s2=" << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "s1=" << s1 << "  |  s2=" << s2 << std::endl << std::endl << std::endl;
}