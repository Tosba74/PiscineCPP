/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:02:49 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/10 11:43:54 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void iter(T *list , int length, void (*p_ft) (T &))
{
	std::cout << "{ ";
    for(int i = 0; i < length; i++)
	{
        if (i)
			std::cout << ", ";
		p_ft(list[i]);
	}
	std::cout << " }" << std::endl;
}

template<typename T>
void display(T & n)
{
        std::cout << n ;
}