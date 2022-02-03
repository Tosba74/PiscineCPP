/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:39:15 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 17:16:17 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point	triangle_0(4, 5);
	Point	triangle_1(2, 3);
	Point	triangle_2(7, 1);
	Point	target1(7, 2);
	Point	target2(3, 6);
	Point	target3(3, 3);
	Point	target4(3.75f, 2.99f);
	Point	target5(1.75f, 4.99f);
	
	if (bsp(triangle_0, triangle_1, triangle_2, target3))
	{
		std::cout << "\033[32mTarget is in the triangle\033[0m" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "\033[31mTarget is not in triangle\033[0m" << std::endl;
		return 1;
	}
}