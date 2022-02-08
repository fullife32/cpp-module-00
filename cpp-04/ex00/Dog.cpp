/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:58:29 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/08 18:58:54 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
}

Dog::~Dog() { }

Dog::Dog( Dog const &other ) {
	*this = other;
}

Dog &Dog::operator=( Dog const &other ) {
	if ( this != &other ) {
		// Insert code here
	}
	return *this;
}