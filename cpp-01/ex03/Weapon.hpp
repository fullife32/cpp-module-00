/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:02:18 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 20:50:14 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon( std::string type );
	~Weapon();

	std::string	getType() const;
	void		setType( std::string type );
};

#endif