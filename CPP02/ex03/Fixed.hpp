/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:45:14 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/07 17:29:22 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <fstream>

class	Fixed
{
	private:
    	int						_value;
    	static const int		_bits = 8;
		
	public:
	    Fixed();
	    Fixed(const int nb);
	    Fixed(const float nb);
	    Fixed(Fixed const& cpy);
	    ~Fixed();
		
	    Fixed &					operator=(Fixed const& rhs);
		Fixed   				operator+(Fixed const& rhs);
    	Fixed   				operator-(Fixed const& rhs);
    	Fixed   				operator*(Fixed const& rhs);
    	Fixed   				operator/(Fixed const& rhs);
    	Fixed &					operator++();
    	Fixed &					operator--();
    	Fixed   				operator++(int);
    	Fixed   				operator--(int);
		bool    				operator<(Fixed const& rhs) const;
    	bool    				operator>(Fixed const& rhs) const;
    	bool    				operator<=(Fixed const& rhs) const;
    	bool    				operator>=(Fixed const& rhs) const;
    	bool    				operator==(Fixed const& rhs)  const;
    	bool    				operator!=(Fixed const& rhs) const;

    	const int&				operatormax(Fixed& lhs, Fixed& rhs);
    	const int&				operatormin(Fixed& lhs, Fixed& rhs);
    	static const Fixed&		max(const Fixed& lhs, const Fixed& rhs);
    	static const Fixed&		min(const Fixed& lhs, const Fixed& rhs);
		
	    int						getRawBits(void) const;
	    void					setRawBits(int const raw);
		float					toFloat(void) const;
		int						toInt(void) const;
};

std::ostream&					operator<<(std::ostream& ofs, Fixed const& rhs);
