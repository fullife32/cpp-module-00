/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 18:05:52 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal() {
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal( Animal const &other ) : _type(other._type) {
	std::cout << "Animal Assignment Operator Called" << std::endl;
}

Animal &Animal::operator=( Animal const &other ) {
	std::cout << "Animal Copy Constructor Called" << std::endl;
	if ( this == &other )
		return *this;
	_type = other._type;
	return *this;
}

std::string	Animal::getType() const {
	return _type;
}