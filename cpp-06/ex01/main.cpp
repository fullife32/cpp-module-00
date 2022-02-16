/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/16 15:03:36 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main() {
	Data		ptr;
	uintptr_t	raw_tmp;
	Data*		new_ptr;

	ptr.n = 10;
	ptr.s = "Hello World!";
	std::cout << "ptr.n:      " << ptr.n << ",      ptr.s: " << ptr.s << std::endl;

	raw_tmp = serialize(&ptr);
	new_ptr = deserialize(raw_tmp);

	std::cout << "new_ptr->n: " << new_ptr->n << ", new_ptr->s: " << new_ptr->s << std::endl << std::endl;
	std::cout << "ptr address:     " << &ptr << std::endl;
	std::cout << "raw_tmp address: " << "0x" << std::hex << raw_tmp << std::endl;
	std::cout << "new_ptr address: " << new_ptr << std::endl;

	return 0;
}