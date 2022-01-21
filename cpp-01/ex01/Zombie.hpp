/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:33:15 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 19:37:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie();
	~Zombie();

	void	announce( void );
	void	changeName( std::string zombieName );
};

Zombie*	zombieHorde( int N, std::string name );

#endif