/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:11:06 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/01 20:27:18 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void) {
	Base *	ptr;

	for (int i = 0; i < 10; i++) {
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		std::cout << "===========================================" << std::endl;
		delete ptr;
	}
}
