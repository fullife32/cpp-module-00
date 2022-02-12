/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:26:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/12 17:45:28 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor Called" << std::endl;
}

AAnimal::AAnimal( AAnimal const &other ) : _type(other._type) {
	std::cout << "AAnimal Assignment Operator Called" << std::endl;
}

AAnimal &AAnimal::operator=( AAnimal const &other ) {
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
	if ( this == &other )
		return *this;
	_type = other._type;
	return *this;
}

std::string	AAnimal::getType() const {
	return _type;
}