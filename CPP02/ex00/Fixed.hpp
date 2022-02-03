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

class	Fixed
{
	private:
    	int					_value;
    	static const int	_bits = 8;
		
	public:
	    Fixed();
	    Fixed(int value);
	    Fixed(Fixed const & cpy);
	    Fixed &	operator=(Fixed const & rhs);
	    int		getRawBits(void) const;
	    void	setRawBits(int const raw);
	    ~Fixed();
};
