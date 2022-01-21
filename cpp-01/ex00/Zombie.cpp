/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:36:40 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 18:32:25 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string zombieName ) : _name(zombieName) { }

Zombie::~Zombie() {
	std::cout << this->_name << " just died" << std::endl;
}

void Zombie::announce() {
	std::cout << '<' << this->_name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
}