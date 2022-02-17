/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:12:18 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/17 19:31:23 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <exception>
#include <limits>
#include <cstdlib>

template < typename T >
class Array {
private:
	unsigned int	m_size;
	T*				m_array;
public:
	Array<T>() : m_size(0), m_array(new T[0]) { }

	Array<T>( unsigned int n ) : m_size(n), m_array(new T[n]) {
		for (unsigned int i = 0; i < m_size; i++)
			m_array[i] = 0;
	}

	~Array<T>() { delete [] m_array; }

	Array<T>( Array<T> const &other ) : m_size(other.size()), m_array(new T[other.size()]) {
		for (unsigned int i = 0; i < m_size; i++)
			this->m_array[i] = other.m_array[i];
	}

	Array<T>	&operator=( Array<T> const &other ) {
		if (this == &other)
			return *this;
		if (this->m_size != other.size()) {
			throw Array<T>::NotSameSize();
		}
		if (this->m_array)
			delete [] this->m_array;
		this->m_size = other.m_size;
		this->m_array = new T[other.m_size];
		for (unsigned int i = 0; i < this->m_size; i++)
			this->m_array[i] = other.m_array[i];
		return *this;
	}

	T			&operator[]( unsigned int idx ) {
		if (idx < std::numeric_limits<unsigned int>::min()
		|| idx >= this->m_size)
			throw Array<T>::OutOfBound();
		else
			return this->m_array[idx];
	}
	
	class OutOfBound : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "This index is out of bound";
			}
	};
	class NotSameSize : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "These arrays don't have the same size";
			}
	};
	
	unsigned int	size() const { return (this->m_size); }
};

#endif