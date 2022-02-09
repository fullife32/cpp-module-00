/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:22:51 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 14:48:03 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &other ) : _type(other._type) {
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other ) {
	std::cout << "WrongAnimal Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_type = other._type;
	return *this;
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal does : a really weird sound..." << std::endl;
}

std::string	WrongAnimal::getType() const {
	return _type;
}