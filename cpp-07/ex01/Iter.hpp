/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:50:35 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/17 18:10:37 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template < typename T >
void	iter(T * array, size_t const size, void (*f)(T const &)) {
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

class Sample {
private:
	int m_n;
public:
	Sample( void ) : m_n( 42 ) { return; }
	int getN( void ) const { return this->m_n; }
};

std::ostream & operator<<( std::ostream & o, Sample const & rhs ) { o << rhs.getN(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template< typename T >
void printFloat( T const & x ) { std::cout << std::fixed << x << std::endl; return; }

template< typename T >
void	upTen( T const & x ) { std::cout << x + 10 << std::endl; return; }

template< typename T >
void	upTenSample( T const & x ) { std::cout << x.getN() + 10 << std::endl; return; }

#endif