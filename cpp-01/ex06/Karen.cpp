/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:57:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/02 14:15:06 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
	logs[0] = (_logpair){"DEBUG", "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"};
	logs[1] = (_logpair){"INFO", "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"};
	logs[2] = (_logpair){"WARNING", "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month."};
	logs[3] = (_logpair){"ERROR", "This is unacceptable, I want to speak to the manager now."};
}

Karen::~Karen() { }

void	Karen::complain( std::string level ) {
	int	i;
	for (i = 0; i < 4; i++)
	{
		if (level.compare(this->logs[i].level) == 0)
			break;
	}

	switch (i)
	{
	case 0:
		std::cout << "[ " << this->logs[0].level << " ] " << this->logs[0].sentence << std::endl << std::endl;
	case 1:
		std::cout << "[ " << this->logs[1].level << " ] " << this->logs[1].sentence << std::endl << std::endl;
	case 2:
		std::cout << "[ " << this->logs[2].level << " ] " << this->logs[2].sentence << std::endl << std::endl;
	case 3:
		std::cout << "[ " << this->logs[3].level << " ] " << this->logs[3].sentence << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}