/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:51:56 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 18:07:17 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		Fixed		_x;
		Fixed		_y;

	public:
		Point();
		Point(Point const& cpy);
		Point(const Fixed x, const Fixed y);
		~Point();
		
		int			getPointX(void) const;
		int			getPointY(void) const;
		void		setPoint(Fixed x, Fixed y);
};

std::ostream&		operator<<(std::ostream& ofs, Point const& rhs);
bool				bsp(Point const& a, Point const& b, Point const& c, Point const& target);
