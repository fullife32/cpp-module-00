	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:59:00 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 14:04:55 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
	_brain = new Brain("I'm a Cat and I like food");
}

Cat::Cat( std::string type ) {
	_type = type;
	std::cout << "Cat Constructor Called with type: " << _type << std::endl;
	_brain = new Brain("I'm a Cat and I like food");
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat( Cat const &other ) : Animal(other) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	_brain = new Brain(other._brain->getIdeas());
}

Cat &Cat::operator=( Cat const &other ) {
	std::cout << "Cat Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	_type = other._type;
	delete _brain;
	_brain = new Brain(other._brain->getIdeas());
	return *this;
}

void	Cat::makeSound() const {
	std::cout << _type << " does : Meow!" << std::endl;
}

void	Cat::printIdeas() const {
	_brain->printIdeas();
}