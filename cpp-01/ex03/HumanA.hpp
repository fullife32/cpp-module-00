/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:57:37 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 21:00:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA( std::string name, Weapon& weapon );
	~HumanA();

	void	attack();
};

#endif
