/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:50:35 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/18 14:51:54 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <iterator>
#include <algorithm>

#include <exception>
#include <limits>
#include <cstdlib>
#include <vector>

class Span {
private:
	unsigned int		m_size;
	std::vector<int>	m_vec;
public:
	Span( unsigned int n );
	~Span();
	Span( Span const &other );
	Span &operator=( Span const &other );

	class NoSpanFound : public std::exception {
		public:
			virtual const char*     what() const throw() {
				return "No Span found in this span";
			}
	};
	class AlreadyFull : public std::exception {
		public:
			virtual const char*     what() const throw() {
				return "You can't add more numbers";
			}
	};

	void	addNumber( int num );
	int		shortestSpan();
	int		longestSpan();
	void	addManyNumber( std::vector<int>	vec );
};

#endif