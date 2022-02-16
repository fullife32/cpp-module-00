/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:04:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/16 16:31:50 by eassouli         ###   ########.fr       */
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
	Data		data;
	uintptr_t	raw;
	Data*		new_data;

	data.n = 10;
	data.s = "Hello World!";
	std::cout << "data.n:      " << data.n << ",      data.s: " << data.s << std::endl;

	raw = serialize(&data);
	new_data = deserialize(raw);

	std::cout << "new_data->n: " << new_data->n << ", new_data->s: " << new_data->s << std::endl << std::endl;
	std::cout << "data address:     " << &data << std::endl;
	std::cout << "raw address:      " << "0x" << std::hex << raw << std::endl;
	std::cout << "new_data address: " << new_data << std::endl;

	return 0;
}