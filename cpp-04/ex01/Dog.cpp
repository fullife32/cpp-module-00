/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:58:29 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 14:42:22 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog( std::string type ) {
	_type = type;
	std::cout << "Dog Constructor Called with type: " << _type << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog( Dog const &other ) : Animal(other) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=( Dog const &other ) {
	std::cout << "Dog Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_type = other._type;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << _type << " does : Woof!" << std::endl;
}