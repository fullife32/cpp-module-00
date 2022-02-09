/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:30:06 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 14:46:52 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat( std::string type ) {
	_type = type;
	std::cout << "WrongCat Constructor Called with type: " << _type << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &other ) : WrongAnimal(other) {
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const &other ) {
	std::cout << "WrongCat Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_type = other._type;
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << _type << " does : a weird Meow!" << std::endl;
}