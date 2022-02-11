/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:29:31 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 19:37:01 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		m_stock[i] = 0;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (m_stock[i]) {
			delete m_stock[i];
		}
	}
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
	*this = other;
}

MateriaSource &MateriaSource::operator=( MateriaSource const &other ) {
	if ( this == &other )
		return *this;
	for (int i = 0; i < 4; i++) {
		if (m_stock[i])
			delete m_stock[i];
		if (other.m_stock[i])
			m_stock[i] = other.m_stock[i]->clone();
		else
			m_stock[i] = 0;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia) {
	if (materia == 0) {
		std::cout << "No Materia passed to learn" << std::endl;
	}
	for (int i = 0; i < 4; i++) {
		if (m_stock[i] == NULL) {
			m_stock[i] = materia;
			return ;
		}
	}
	std::cout << "The Materia Source is already full to learn the type: " << materia->getType() << std::endl;
	delete materia;
	materia = 0;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	if (type == "") {
		std::cout << "No type passed to create a Materia" << std::endl;
		return 0;
	}
	for (int i = 0; i < 4; i++) {
		if (m_stock[i] && type.compare(m_stock[i]->getType())) {
			return m_stock[i]->clone();
		}
	}
	std::cout << "The Materia Source didn't learn the type: " << type << std::endl;
	return 0;
}
