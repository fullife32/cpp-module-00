/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:36:40 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 19:21:32 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::~Zombie() {
	std::cout << this->_name << " exploded in pieces" << std::endl;
}

void	Zombie::announce() {
	std::cout << '<' << this->_name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::changeName( std::string zombieName ) {
	this->_name = zombieName;
}