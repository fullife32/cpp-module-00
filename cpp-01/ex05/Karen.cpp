/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:57:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/22 23:38:01 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
	logs[0] = (_logpair){"DEBUG", &Karen::_debug};
	logs[1] = (_logpair){"INFO", &Karen::_info};
	logs[2] = (_logpair){"WARNING", &Karen::_warning};
	logs[3] = (_logpair){"ERROR", &Karen::_error};
}

Karen::~Karen() { }

void	Karen::_debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level ) {
	for (int i = 0; i < 4; i++)
	{
		if (level == this->logs[i].level)
		{
			std::cout << "[ " << level << " ] "; 
			(this->*logs[i].callback)();
		}
	}
}