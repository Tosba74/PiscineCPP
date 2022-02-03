/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:07:45 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 17:11:29 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	ThanksDevNet(Point const& target, Point const& p1, Point const& p2)
{
	return ((p2.getPointX() - p1.getPointX()) * (target.getPointY() - p1.getPointY()) - (target.getPointX() - p1.getPointX()) * (p2.getPointY() - p1.getPointY()));
}


bool	bsp(Point const& a, Point const& b, Point const& c, Point const& target)
{
	bool	b1, b2, b3;

    b1 = ThanksDevNet(target, a, b) < 0.0f;
    b2 = ThanksDevNet(target, b, c) < 0.0f;
    b3 = ThanksDevNet(target, c, a) < 0.0f;
    if ((b1 == b2) && (b2 == b3))
		return true;
	else
		return false;
}
