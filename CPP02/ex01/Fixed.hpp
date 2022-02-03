/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:45:14 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/05 11:27:33 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <fstream>

class	Fixed
{
	private:
    	int					_value;
    	static const int	_bits = 8;
		
	public:
	    Fixed();
	    Fixed(const int nb);
	    Fixed(const float nb);
	    Fixed(Fixed const & cpy);
	    Fixed &	operator=(Fixed const & rhs);
	    int		getRawBits(void) const;
	    void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	    ~Fixed();
};

std::ostream &	operator<<(std::ostream & ofs, Fixed const & rhs);
