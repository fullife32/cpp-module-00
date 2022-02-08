/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:59:00 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 18:59:09 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
}

Cat::~Cat() { }

Cat::Cat( Cat const &other ) {
	*this = other;
}

Cat &Cat::operator=( Cat const &other ) {
	if ( this != &other ) {
		// Insert code here
	}
	return *this;
}