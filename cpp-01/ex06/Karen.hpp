/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:57:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/22 23:30:06 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <string>
#include <iostream>

class Karen
{
private:
	typedef void (Karen::*t_callback)();
	struct _logpair
	{
		std::string	level;
		std::string sentence;
	};

	_logpair	logs[4];

public:
	Karen();
	~Karen();

	void	complain( std::string level );
};

#endif