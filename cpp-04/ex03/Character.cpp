/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:01:57 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 20:13:41 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name ) : m_name(name) {
	for (int i = 0; i < 4; i++) {
		m_inv[i] = 0;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (m_inv[i])
			delete m_inv[i];
	}
}

Character::Character( Character const &other ) {
	*this = other;
}

Character &Character::operator=( Character const &other ) {
	if ( this == &other )
		return *this;
	for (int i = 0; i < 4; i++) {
		if (m_inv[i])
			delete m_inv[i];
		if (other.m_inv[i])
			m_inv[i] = other.m_inv[i]->clone();
		else
			m_inv[i] = 0;
	}
	return *this;
}

std::string const & Character::getName() const {
	return m_name;
}

void Character::equip(AMateria* m) {
	int	i = 0;

	if (m == 0) {
		std::cout << "No Materia passed in parameter" << std::endl;
		return ;
	}
	while (i < 4) {
		if (m_inv[i] == NULL)
			break;
		i++;
	}
	if (i == 4) {
		std::cout << m_name << " has already 4 materias!" << std::endl;
		if (m)
			delete m;
		return ;
	}
	m_inv[i] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "The slot is out of range" << std::endl;
		return ;
	}
	if (m_inv[idx] == NULL)
	if (m_inv[idx]) {
		std::cout << m_name << " dropped an item in the slot: " << idx << std::endl;
		delete m_inv[idx];
		m_inv[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "The slot is out of range" << std::endl;
		return ;
	}
	if (m_inv[idx] == 0) {
		std::cout << m_name << " has no item in the slot " << idx << std::endl;
		return ;
	}
	m_inv[idx]->use(target);
}
