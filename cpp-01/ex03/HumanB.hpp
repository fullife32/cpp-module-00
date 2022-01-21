/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:58:33 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 21:21:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
	
public:
	HumanB( std::string name );
	~HumanB();

	void	attack();
	void	setWeapon( Weapon& weapon );
};

#endif