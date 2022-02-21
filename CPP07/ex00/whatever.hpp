/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:48:47 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/20 20:32:23 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template<typename T>
T	max(T &x, T &y)
{
	return (x >= y ? x : y);
}

template<typename T>
T	min(T &x, T &y)
{
	return (x < y ? x : y);
}

template<typename T>
void	swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}
