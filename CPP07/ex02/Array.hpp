/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:50:02 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/14 17:14:23 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_array;

	public:
		Array() : _size(0) {this->_array = new T[0];}
		Array(unsigned int n) : _size(n) {if (n < 0) throw OutOfLimitsException();this->_array = new T[this->_size];}
		Array(Array const& rhs)
		{
			if (!this->_array)
				delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
		}
		~Array() {delete [] this->_array;}

		Array			operator=(Array& rhs)
		{
			if (this != &rhs)
			{
				if (!this->_array)
					delete [] this->_array;
				this->_size = rhs._size;
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = rhs[i];
			}
			return (*this);			
		}
		T&				operator[](unsigned int n)
		{
			if (n >= this->_size)
				throw Array<int>::OutOfLimitsException();
			return this->_array[n];
		}
		unsigned int	getSize() const {return this->_size;}
		T*				getArray() const {return this->_array;}
		void			setArray(unsigned int n, T value)
		{
			if (n >= this->_size)
				throw Array<int>::OutOfLimitsException();
			this->_array[n] = value;
		}
		
		class OutOfLimitsException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return "\n\e[31mError:\e[0m\nIndex out of limits";
				}
		};
};

template<typename T>
std::ostream&	operator<<(std::ostream& ofs, Array<T>& inst)
{
	ofs << "Size = " << inst.getSize() << std::endl;
    for (unsigned int i = 0; i < inst.getSize(); i++)
        ofs << "array[" << i << "]\t= " << inst[i] << std::endl;
    return ofs;
}
