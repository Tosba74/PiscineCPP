/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:48:47 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/10 10:02:13 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template<typename T>
T	max(T &x, T &y)
{
	if (x < y)
		return (y);
	return (x);
}

template<typename T>
T	min(T &x, T &y)
{
	if (x > y)
		return (y);
	return (x);
}

template<typename T>
void	swap(T &x, T &y)
{
	T	tmp = x;

	x = y;
	y = tmp;
}
