/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:24:34 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/07 23:02:34 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {
protected:
	std::string	_name;
	int			_hitPts;
	int			_energyPts;
	int			_attackDmg;
public:
	ClapTrap( std::string name );
	~ClapTrap();
	ClapTrap( ClapTrap const &other );
	ClapTrap &operator=( ClapTrap const &other );

	virtual void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif