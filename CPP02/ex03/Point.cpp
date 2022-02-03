/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:51:54 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 17:17:16 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}
Point::Point(Point const& cpy) : _x(cpy._x), _y(cpy._y)
{
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}
Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
	// std::cout << "Fixed constructor called" << std::endl;
	return ;
}
Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

int		Point::getPointX(void) const
{
	return this->_x.getRawBits();
}
int		Point::getPointY(void) const
{
	return this->_y.getRawBits();
}	
void	Point::setPoint(Fixed x, Fixed y)
{
	this->_x = x;
	this->_y = y;
	return ;
}

std::ostream&	operator<<(std::ostream& ofs, Point const& rhs)
{
	ofs << "Point(" << rhs.getPointX() << ", " << rhs.getPointY() << ")";
	return ofs;
}
