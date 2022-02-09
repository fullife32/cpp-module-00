/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:56:32 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 16:19:18 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		_ideas[i] = "I like Food";
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain( std::string ideas ) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas;
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain( Brain const &other ) {
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain &Brain::operator=( Brain const &other ) {
	std::cout << "Brain Assignment Operator Called" << std::endl;
	if ( this == &other )
		return *this;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	return *this;
}

void	Brain::printIdeas() const {
	for (int i = 0; i < 100; i++) {
		std::cout << _ideas[i] << std::endl;
	}
}

std::string	Brain::getIdeas() const {
	return _ideas[0];
}