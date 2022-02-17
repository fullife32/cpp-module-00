/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fun.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:50:35 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/17 15:13:38 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUN_H
# define FUN_H

#include <iostream>

template < typename T >
void	swap( T & a, T & b ) {
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T const &		min( T const & a, T const & b ) {
	return (a < b ? a : b);
}

template < typename T >
T const &		max( T const & a, T const & b ) {
	return (a > b ? a : b);	
}

class Sample {
private:
	int m_n;
public:
	Sample(void) : m_n(0) { }
	Sample( int n ) : m_n( n ) { }

	Sample & operator= ( Sample & other ) { m_n = other.m_n; return *this; }

	bool operator==( Sample const & rhs ) const { return (this->m_n == rhs.m_n); }
	bool operator!=( Sample const & rhs ) const{ return (this->m_n != rhs.m_n); }
	bool operator>( Sample const & rhs ) const { return (this->m_n > rhs.m_n); }
	bool operator<( Sample const & rhs ) const { return (this->m_n < rhs.m_n); }
	bool operator>=( Sample const & rhs ) const { return (this->m_n >= rhs.m_n); }
	bool operator<=( Sample const & rhs ) const { return (this->m_n <= rhs.m_n); }

	int getN() const { return m_n; }
};

std::ostream & operator<<(std::ostream & o, const Sample &a) { o << a.getN(); return o; }

#endif