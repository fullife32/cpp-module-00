/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:57:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/22 22:40:50 by eassouli         ###   ########.fr       */
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
		t_callback	callback;
	};

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );

	_logpair	logs[4];

public:
	Karen();
	~Karen();

	void	complain( std::string level );
};

#endif