/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:43:09 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/01 18:55:06 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int	main(void) {
	Data*		obj = new Data(42, "Hello World");
	Data*		deserialize;
	uintptr_t	serialized;

	std::cout << "Address: " << obj << std::endl \
	<< "Number: " << obj->getNumber() << std::endl \
	<< "String: " << obj->getString() << std::endl << std::endl;

	serialized = obj->serialize(obj);

	std::cout << "Serialized value: " << serialized << std::endl << std::endl;

	deserialize = obj->deserialize(serialized);

	std::cout << "Address: " << deserialize << std::endl \
	<< "Number: " << deserialize->getNumber() << std::endl \
	<< "String: " << deserialize->getString() << std::endl;

	delete obj;
}